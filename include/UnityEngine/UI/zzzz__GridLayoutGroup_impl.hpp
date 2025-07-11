#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner::GridLayoutGroup_Corner(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner::GridLayoutGroup_Corner() {}
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner UnityEngine::UI::GridLayoutGroup_Corner::UpperLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner UnityEngine::UI::GridLayoutGroup_Corner::UpperRight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner UnityEngine::UI::GridLayoutGroup_Corner::LowerLeft{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner UnityEngine::UI::GridLayoutGroup_Corner::LowerRight{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis::GridLayoutGroup_Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis::GridLayoutGroup_Axis() {}
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis UnityEngine::UI::GridLayoutGroup_Axis::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis UnityEngine::UI::GridLayoutGroup_Axis::Vertical{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint::GridLayoutGroup_Constraint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint::GridLayoutGroup_Constraint() {}
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint UnityEngine::UI::GridLayoutGroup_Constraint::Flexible{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint UnityEngine::UI::GridLayoutGroup_Constraint::FixedColumnCount{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint UnityEngine::UI::GridLayoutGroup_Constraint::FixedRowCount{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_startCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup_Corner (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_startCorner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startCorner",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_startCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup_Corner)>(
    &::UnityEngine::UI::GridLayoutGroup::set_startCorner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4ab8c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startCorner", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Corner>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_startAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup_Axis (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_startAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startAxis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_startAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup_Axis)>(
    &::UnityEngine::UI::GridLayoutGroup::set_startAxis)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4ab8c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startAxis", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Axis>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_cellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8cc0;

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
  constexpr static std::size_t addrs = 0x4ab8cc8;

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
  constexpr static std::size_t addrs = 0x4ab8d2c;

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
  constexpr static std::size_t addrs = 0x4ab8d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_spacing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_constraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup_Constraint (::UnityEngine::UI::GridLayoutGroup::*)()>(
    &::UnityEngine::UI::GridLayoutGroup::get_constraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_constraint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.set_constraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup_Constraint)>(
    &::UnityEngine::UI::GridLayoutGroup::set_constraint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4ab8da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Constraint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GridLayoutGroup.get_constraintCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::GridLayoutGroup::*)()>(&::UnityEngine::UI::GridLayoutGroup::get_constraintCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8dfc;

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
  constexpr static std::size_t addrs = 0x4ab8e04;

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
  constexpr static std::size_t addrs = 0x4ab8e64;

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
  constexpr static std::size_t addrs = 0x4ab8fe8;

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
  constexpr static std::size_t addrs = 0x4ab95ec;

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
  constexpr static std::size_t addrs = 0x4ab9888;

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
  constexpr static std::size_t addrs = 0x4aba01c;

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
  constexpr static std::size_t addrs = 0x4ab9890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "SetCellsAlongAxis", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartCorner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCorner;
}
constexpr ::UnityEngine::UI::GridLayoutGroup_Corner const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartCorner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCorner;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_StartCorner(::UnityEngine::UI::GridLayoutGroup_Corner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartCorner = value;
}
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAxis;
}
constexpr ::UnityEngine::UI::GridLayoutGroup_Axis const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_StartAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartAxis;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_StartAxis(::UnityEngine::UI::GridLayoutGroup_Axis value) {
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
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Constraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Constraint;
}
constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint const& UnityEngine::UI::GridLayoutGroup::__cordl_internal_get_m_Constraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Constraint;
}
constexpr void UnityEngine::UI::GridLayoutGroup::__cordl_internal_set_m_Constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value) {
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
inline ::UnityEngine::UI::GridLayoutGroup_Corner UnityEngine::UI::GridLayoutGroup::get_startCorner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startCorner",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::GridLayoutGroup_Corner, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_startCorner(::UnityEngine::UI::GridLayoutGroup_Corner value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startCorner", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Corner>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::GridLayoutGroup_Axis UnityEngine::UI::GridLayoutGroup::get_startAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_startAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::GridLayoutGroup_Axis, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_startAxis(::UnityEngine::UI::GridLayoutGroup_Axis value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_startAxis", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Axis>::get() })));
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
inline ::UnityEngine::UI::GridLayoutGroup_Constraint UnityEngine::UI::GridLayoutGroup::get_constraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "get_constraint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::GridLayoutGroup_Constraint, false>(this, ___internal_method);
}
inline void UnityEngine::UI::GridLayoutGroup::set_constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::GridLayoutGroup*>::get(), "set_constraint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::GridLayoutGroup_Constraint>::get() })));
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
inline ::UnityEngine::UI::GridLayoutGroup* UnityEngine::UI::GridLayoutGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::GridLayoutGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup() {}
