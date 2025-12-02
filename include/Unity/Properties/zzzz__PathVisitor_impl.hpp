#pragma once
// IWYU pragma private; include "Unity/Properties/PathVisitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_impl.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
//  Writing Method size for method: ::Unity::Properties::PathVisitor_PropertyScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Properties::PathVisitor_PropertyScope::*)(::Unity::Properties::PathVisitor*, ::Unity::Properties::IProperty*)>(&::Unity::Properties::PathVisitor_PropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x696dcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor_PropertyScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PathVisitor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor_PropertyScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor_PropertyScope::*)()>(
    &::Unity::Properties::PathVisitor_PropertyScope::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x696dd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor_PropertyScope>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Properties::PathVisitor_PropertyScope::_ctor(::Unity::Properties::PathVisitor* visitor, ::Unity::Properties::IProperty* property) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor_PropertyScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PathVisitor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor, property);
}
inline void Unity::Properties::PathVisitor_PropertyScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor_PropertyScope>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Properties::PathVisitor_PropertyScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Properties::PathVisitor_PropertyScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Visitor", ty: "::Unity::Properties::PathVisitor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Property", ty: "::Unity::Properties::IProperty*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::PathVisitor_PropertyScope::PathVisitor_PropertyScope(::Unity::Properties::PathVisitor* m_Visitor, ::Unity::Properties::IProperty* m_Property) noexcept {
  this->m_Visitor = m_Visitor;
  this->m_Property = m_Property;
}
// Ctor Parameters []
constexpr ::Unity::Properties::PathVisitor_PropertyScope::PathVisitor_PropertyScope() {}
//  Writing Method size for method: ::Unity::Properties::PathVisitor.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::PropertyPath (::Unity::Properties::PathVisitor::*)()>(
    &::Unity::Properties::PathVisitor::get_Path)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x696dca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_Path",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.set_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)(::Unity::Properties::PropertyPath)>(
    &::Unity::Properties::PathVisitor::set_Path)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x696dcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_Path", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertyPath>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)()>(&::Unity::Properties::PathVisitor::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6969ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.get_Property
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::IProperty* (::Unity::Properties::PathVisitor::*)()>(
    &::Unity::Properties::PathVisitor::get_Property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_Property",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.set_Property
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)(::Unity::Properties::IProperty*)>(
    &::Unity::Properties::PathVisitor::set_Property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_Property", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.get_ReadonlyVisit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Properties::PathVisitor::*)()>(&::Unity::Properties::PathVisitor::get_ReadonlyVisit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_ReadonlyVisit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.set_ReadonlyVisit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)(bool)>(&::Unity::Properties::PathVisitor::set_ReadonlyVisit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_ReadonlyVisit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.get_ReturnCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::VisitReturnCode (::Unity::Properties::PathVisitor::*)()>(
    &::Unity::Properties::PathVisitor::get_ReturnCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_ReturnCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor.set_ReturnCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)(::Unity::Properties::VisitReturnCode)>(
    &::Unity::Properties::PathVisitor::set_ReturnCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696dce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_ReturnCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::VisitReturnCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PathVisitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::PathVisitor::*)()>(&::Unity::Properties::PathVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6969f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Properties::PathVisitor::__cordl_internal_get_m_PathIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PathIndex;
}
constexpr int32_t const& Unity::Properties::PathVisitor::__cordl_internal_get_m_PathIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PathIndex;
}
constexpr void Unity::Properties::PathVisitor::__cordl_internal_set_m_PathIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PathIndex = value;
}
constexpr ::Unity::Properties::PropertyPath& Unity::Properties::PathVisitor::__cordl_internal_get__Path_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr ::Unity::Properties::PropertyPath const& Unity::Properties::PathVisitor::__cordl_internal_get__Path_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Path_k__BackingField;
}
constexpr void Unity::Properties::PathVisitor::__cordl_internal_set__Path_k__BackingField(::Unity::Properties::PropertyPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Path_k__BackingField = value;
}
constexpr ::Unity::Properties::IProperty*& Unity::Properties::PathVisitor::__cordl_internal_get__Property_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Property_k__BackingField;
}
constexpr ::Unity::Properties::IProperty* const& Unity::Properties::PathVisitor::__cordl_internal_get__Property_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Property_k__BackingField;
}
constexpr void Unity::Properties::PathVisitor::__cordl_internal_set__Property_k__BackingField(::Unity::Properties::IProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Property_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Properties::PathVisitor::__cordl_internal_get__ReadonlyVisit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadonlyVisit_k__BackingField;
}
constexpr bool const& Unity::Properties::PathVisitor::__cordl_internal_get__ReadonlyVisit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadonlyVisit_k__BackingField;
}
constexpr void Unity::Properties::PathVisitor::__cordl_internal_set__ReadonlyVisit_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReadonlyVisit_k__BackingField = value;
}
constexpr ::Unity::Properties::VisitReturnCode& Unity::Properties::PathVisitor::__cordl_internal_get__ReturnCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnCode_k__BackingField;
}
constexpr ::Unity::Properties::VisitReturnCode const& Unity::Properties::PathVisitor::__cordl_internal_get__ReturnCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnCode_k__BackingField;
}
constexpr void Unity::Properties::PathVisitor::__cordl_internal_set__ReturnCode_k__BackingField(::Unity::Properties::VisitReturnCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReturnCode_k__BackingField = value;
}
inline ::Unity::Properties::PropertyPath Unity::Properties::PathVisitor::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_Path",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath, false>(this, ___internal_method);
}
inline void Unity::Properties::PathVisitor::set_Path(::Unity::Properties::PropertyPath value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_Path", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertyPath>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Properties::PathVisitor::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::IProperty* Unity::Properties::PathVisitor::get_Property() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_Property",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty*, false>(this, ___internal_method);
}
inline void Unity::Properties::PathVisitor::set_Property(::Unity::Properties::IProperty* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_Property", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Properties::PathVisitor::get_ReadonlyVisit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_ReadonlyVisit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Properties::PathVisitor::set_ReadonlyVisit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_ReadonlyVisit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Properties::VisitReturnCode Unity::Properties::PathVisitor::get_ReturnCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "get_ReturnCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::VisitReturnCode, false>(this, ___internal_method);
}
inline void Unity::Properties::PathVisitor::set_ReturnCode(::Unity::Properties::VisitReturnCode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "set_ReturnCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::VisitReturnCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContainer>
inline void Unity::Properties::PathVisitor::Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "Unity.Properties.IPropertyBagVisitor.Visit",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::IPropertyBag_1<TContainer>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, properties, container);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::PathVisitor::Unity_Properties_IPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), "Unity.Properties.IPropertyVisitor.Visit",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Property_2<TContainer, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TContainer>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, container);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::PathVisitor::VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), 7)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, container, value);
}
inline void Unity::Properties::PathVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PathVisitor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Properties::PathVisitor* Unity::Properties::PathVisitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::PathVisitor*>());
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
constexpr Unity::Properties::PathVisitor::operator ::Unity::Properties::IPropertyBagVisitor*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
constexpr ::Unity::Properties::IPropertyBagVisitor* Unity::Properties::PathVisitor::i___Unity__Properties__IPropertyBagVisitor() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyVisitor"
constexpr Unity::Properties::PathVisitor::operator ::Unity::Properties::IPropertyVisitor*() noexcept {
  return static_cast<::Unity::Properties::IPropertyVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyVisitor"
constexpr ::Unity::Properties::IPropertyVisitor* Unity::Properties::PathVisitor::i___Unity__Properties__IPropertyVisitor() noexcept {
  return static_cast<::Unity::Properties::IPropertyVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Properties::PathVisitor::PathVisitor() {}
