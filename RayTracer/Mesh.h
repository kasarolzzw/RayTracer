#ifndef MESH_H
#define MESH_H


#include <vector>
#include "Vector.h"
#include "GeometryUnion.h"
#include "Ray.h"


// ��������Ƭ���ɵĸ��Ӽ���ͼ��
class Mesh : public GeometryUnion
{

public:
    Mesh(const Vec3f &surfaceColor = _defaultSurfaceColor, const Vec3f &emissionColor = _defaultEmissionColor, const float transparency = _defaultTransparency, const float reflection = _defaultReflection);

    // ��ȡobjģ���ļ�
    // ��ȷ��ȡ��Ϸ���0����������-1
    int loadObj(const std::string filename);

};


#endif