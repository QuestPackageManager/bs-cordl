#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_impl.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner::__GridLayoutGroup__Corner(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner::__GridLayoutGroup__Corner() {}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner UnityEngine::UI::__GridLayoutGroup__Corner::UpperLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner UnityEngine::UI::__GridLayoutGroup__Corner::UpperRight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner UnityEngine::UI::__GridLayoutGroup__Corner::LowerLeft{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner UnityEngine::UI::__GridLayoutGroup__Corner::LowerRight{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis::__GridLayoutGroup__Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis::__GridLayoutGroup__Axis() {}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis UnityEngine::UI::__GridLayoutGroup__Axis::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis UnityEngine::UI::__GridLayoutGroup__Axis::Vertical{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint::__GridLayoutGroup__Constraint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint::__GridLayoutGroup__Constraint() {}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint UnityEngine::UI::__GridLayoutGroup__Constraint::Flexible{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint UnityEngine::UI::__GridLayoutGroup__Constraint::FixedColumnCount{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint UnityEngine::UI::__GridLayoutGroup__Constraint::FixedRowCount{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_startCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__GridLayoutGroup__Corner (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_startCorner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startCorner",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_startCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::__GridLayoutGroup__Corner)>(
    &::UnityEngine::UI::GridLayoutGroup::set_startCorner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4a51ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startCorner", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Corner>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_startAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__GridLayoutGroup__Axis (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_startAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startAxis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_startAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::__GridLayoutGroup__Axis)>(
    &::UnityEngine::UI::GridLayoutGroup::set_startAxis)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4a51c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startAxis", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Axis>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_cellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_cellSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_cellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UI::GridLayoutGroup::set_cellSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4a51c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_cellSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_spacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::get_spacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_spacing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_spacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UI::GridLayoutGroup::set_spacing)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4a51cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_spacing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_constraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__GridLayoutGroup__Constraint (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_constraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_constraint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_constraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::__GridLayoutGroup__Constraint)>(
    &::UnityEngine::UI::GridLayoutGroup::set_constraint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4a51d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Constraint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_constraintCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::get_constraintCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a51da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(),
                                                                               "get_constraintCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_constraintCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(int32_t)>(&::UnityEngine::UI::GridLayoutGroup::set_constraintCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4a51da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraintCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4a51e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x4a51f8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4a52590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a5282c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a52fc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.SetCellsAlongAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(int32_t)>(&::UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x4a52834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "SetCellsAlongAxis", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartCorner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCorner;
}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartCorner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCorner;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_StartCorner(::UnityEngine::UI::__GridLayoutGroup__Corner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartCorner = value;
}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAxis;
}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAxis;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_StartAxis(::UnityEngine::UI::__GridLayoutGroup__Axis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartAxis = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_CellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_CellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CellSize;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_CellSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CellSize = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Spacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Spacing;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Spacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Spacing;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_Spacing(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Spacing = value;
}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Constraint;
}
constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Constraint;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_Constraint(::UnityEngine::UI::__GridLayoutGroup__Constraint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Constraint = value;
}
constexpr int32_t& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_ConstraintCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstraintCount;
}
constexpr int32_t const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_ConstraintCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConstraintCount;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_ConstraintCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConstraintCount = value;
}
inline ::UnityEngine::UI::__GridLayoutGroup__Corner UnityEngine::UI::GridLayoutGroup::get_startCorner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startCorner",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__GridLayoutGroup__Corner, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_startCorner(::UnityEngine::UI::__GridLayoutGroup__Corner value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startCorner", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Corner>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__GridLayoutGroup__Axis UnityEngine::UI::GridLayoutGroup::get_startAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__GridLayoutGroup__Axis, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_startAxis(::UnityEngine::UI::__GridLayoutGroup__Axis value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startAxis", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Axis>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::get_cellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_cellSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_cellSize(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_cellSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::GridLayoutGroup::get_spacing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_spacing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_spacing(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_spacing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__GridLayoutGroup__Constraint UnityEngine::UI::GridLayoutGroup::get_constraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_constraint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__GridLayoutGroup__Constraint, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_constraint(::UnityEngine::UI::__GridLayoutGroup__Constraint value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__GridLayoutGroup__Constraint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::GridLayoutGroup::get_constraintCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_constraintCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_constraintCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraintCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::GridLayoutGroup* UnityEngine::UI::GridLayoutGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::GridLayoutGroup*>());
}
inline void UnityEngine::UI::GridLayoutGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::SetLayoutVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis(int32_t axis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "SetCellsAlongAxis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup() {}
