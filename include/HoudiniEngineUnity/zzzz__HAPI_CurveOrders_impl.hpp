#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CurveOrders_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CurveOrders(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CurveOrders() {}
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_VARYING{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_INVALID{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_LINEAR{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_QUADRATIC{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_CUBIC{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
