#include "Turn.hpp"

/**
 * This variable is static so that every instance can access this value
 */
int Turn::instances = 0;


/**
 * @brief Costum Constructor
 * @param color black = false, white = true
 * @param target Coordinate of the target field
 */
Turn::Turn(bool color, Coordinate target) : m_color(color), m_target(target), m_id(Turn::instances)
{
	//m_id = Turn::instances;
	Turn::instances++;
}

/**
 * @brief Sets the color. false for black and true for white
 * @param color
 */
void Turn::setColor(bool color)
{
	m_color = color;
}

/**
 * @brief Sets the target Coordinate
 * @param target The Coordinate
 */
void Turn::setTarget(Coordinate target)
{
	m_target = target;
}

/**
 * @brief Returns the color of the Stone which will be played
 * @return The color
 */
bool Turn::getColor() const
{
	return m_color;
}

/**
 * @brief Returns the id of this turn
 * @return The id of this turn
 */
int Turn::getId() const
{
	return m_id;
}

/**
 * @brief Returns the target Coordinate
 * @return The target Coordinate
 * @throws Exception if the object is not fully initialized
 */
Coordinate Turn::getTarget() const
{
	return m_target;
}

inline bool operator==(const Turn& lhs, const Turn& rhs)
{
	return lhs.getColor() == rhs.getColor() && lhs.getTarget() == rhs.getTarget();
}

inline bool operator!=(const Turn& lhs, const Turn& rhs)
{
	return not (lhs == rhs);
}

inline bool operator<(const Turn& lhs, const Turn& rhs)
{
	return lhs.getId() < rhs.getId();
}

inline bool operator>(const Turn& lhs, const Turn& rhs)
{
	return rhs < lhs;
}

inline bool operator<=(const Turn& lhs, const Turn& rhs)
{
	return not (lhs > rhs);
}

inline bool operator>=(const Turn& lhs, const Turn& rhs)
{
	return not (lhs < rhs);
}