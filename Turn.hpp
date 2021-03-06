#ifndef TURN_HPP
#define TURN_HPP

#include "Coordinate.hpp"

class Turn {
public:
	Turn(bool color, Coordinate target);
	
	bool getColor() const;
	int getId() const;
	Coordinate getTarget() const;
	
	void setColor(bool color);
	void setTarget(Coordinate target);
	
	static int instances;
private:
	bool m_color = false;
	int m_id = -1;
	Coordinate m_target;
};

inline bool operator==(const Turn& lhs, const Turn& rhs);
inline bool operator!=(const Turn& lhs, const Turn& rhs);
inline bool operator<(const Turn& lhs, const Turn& rhs);
inline bool operator>(const Turn& lhs, const Turn& rhs);
inline bool operator<=(const Turn& lhs, const Turn& rhs);
inline bool operator>=(const Turn& lhs, const Turn& rhs);

#endif /* TURN_HPP */

