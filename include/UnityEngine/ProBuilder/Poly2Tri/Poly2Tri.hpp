#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine\ProBuilder\Poly2Tri\AdvancingFront.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\AdvancingFrontNode.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\ConstrainedPointSet.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweep.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepBasin.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepConstraint.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepContext.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepDebugContext.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepEdgeEvent.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DTSweepPointComparator.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\DelaunayTriangle.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\FixedArray3_1.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\FixedBitArray3.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\Orientation.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\P2T.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PointGenerator.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PointOnEdgeException.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PointSet.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\Polygon.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PolygonGenerator.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PolygonPoint.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\PolygonSet.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\Triangulatable.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationAlgorithm.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationConstraint.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationContext.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationDebugContext.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationMode.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationPoint.hpp"
#include "UnityEngine\ProBuilder\Poly2Tri\TriangulationUtil.hpp"
#ifdef __cpp_modules
export module Poly2Tri;
#endif
