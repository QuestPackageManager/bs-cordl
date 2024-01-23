#pragma once
#include "GlobalNamespace/zzzz__CreditsData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CreditsData__TextStyle::__CreditsData__TextStyle(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CreditsData__TextStyle::__CreditsData__TextStyle() {}
constexpr ::GlobalNamespace::__CreditsData__TextStyle GlobalNamespace::__CreditsData__TextStyle::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__CreditsData__TextStyle GlobalNamespace::__CreditsData__TextStyle::Title{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__CreditsData__TextStyle GlobalNamespace::__CreditsData__TextStyle::Header{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22834d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), "IsEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22834f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__Text._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__Text::*)()>(&::GlobalNamespace::__CreditsData__Text::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22835b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::__CreditsData__Text::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_localized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr bool const& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_localized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr void GlobalNamespace::__CreditsData__Text::__cordl_internal_set_localized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localized = value;
}
constexpr ::GlobalNamespace::__CreditsData__TextStyle& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr ::GlobalNamespace::__CreditsData__TextStyle const& GlobalNamespace::__CreditsData__Text::__cordl_internal_get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr void GlobalNamespace::__CreditsData__Text::__cordl_internal_set_style(::GlobalNamespace::__CreditsData__TextStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___style = value;
}
inline bool GlobalNamespace::__CreditsData__Text::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), "IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__CreditsData__Text::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__Text* GlobalNamespace::__CreditsData__Text::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CreditsData__Text*>());
}
inline void GlobalNamespace::__CreditsData__Text::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__Text*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CreditsData__Text::__CreditsData__Text() {}
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__RootCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22835c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                               "HasTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__RootCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22835d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                               "HasText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem.HasRowItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__RootCreditsItem::HasRowItems)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22835e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                               "HasRowItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__RootCreditsItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__RootCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__RootCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__CreditsData__Text*& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> const& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_set_title(::GlobalNamespace::__CreditsData__Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CreditsData__Text*& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> const& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_set_text(::GlobalNamespace::__CreditsData__Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_rowCountOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowCountOverride;
}
constexpr int32_t const& GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_rowCountOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowCountOverride;
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_set_rowCountOverride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rowCountOverride = value;
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>&
GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_creditsItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*> const&
GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_get_creditsItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr void GlobalNamespace::__CreditsData__RootCreditsItem::__cordl_internal_set_creditsItems(
    ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creditsItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasTitle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                             "HasTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                             "HasText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__RootCreditsItem::HasRowItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(),
                                                                             "HasRowItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__RootCreditsItem* GlobalNamespace::__CreditsData__RootCreditsItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CreditsData__RootCreditsItem*>());
}
inline void GlobalNamespace::__CreditsData__RootCreditsItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__RootCreditsItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CreditsData__RootCreditsItem::__CreditsData__RootCreditsItem() {}
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem.HasTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__ChildCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2283608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                               "HasTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem.HasText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__ChildCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2283618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                               "HasText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CreditsData__ChildCreditsItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CreditsData__ChildCreditsItem::*)()>(
    &::GlobalNamespace::__CreditsData__ChildCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__CreditsData__Text*& GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> const& GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_set_title(::GlobalNamespace::__CreditsData__Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CreditsData__Text*& GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> const& GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::__CreditsData__ChildCreditsItem::__cordl_internal_set_text(::GlobalNamespace::__CreditsData__Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::__CreditsData__ChildCreditsItem::HasTitle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                             "HasTitle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__CreditsData__ChildCreditsItem::HasText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                             "HasText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__CreditsData__ChildCreditsItem* GlobalNamespace::__CreditsData__ChildCreditsItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CreditsData__ChildCreditsItem*>());
}
inline void GlobalNamespace::__CreditsData__ChildCreditsItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CreditsData__ChildCreditsItem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CreditsData__ChildCreditsItem::__CreditsData__ChildCreditsItem() {}
//  Writing Method size for method: ::GlobalNamespace::CreditsData.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CreditsData* (*)(::StringW)>(&::GlobalNamespace::CreditsData::Deserialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22833c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CreditsData::*)()>(&::GlobalNamespace::CreditsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22834cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>&
GlobalNamespace::CreditsData::__cordl_internal_get_creditsItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*> const&
GlobalNamespace::CreditsData::__cordl_internal_get_creditsItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr void
GlobalNamespace::CreditsData::__cordl_internal_set_creditsItems(::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*, ::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creditsItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::Deserialize(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreditsData*, false>(nullptr, ___internal_method, text);
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CreditsData*>());
}
inline void GlobalNamespace::CreditsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CreditsData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData::CreditsData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
