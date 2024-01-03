#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/zzzz__ArrayList_IListWrapper_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Collections/zzzz__ArrayList_ReadOnlyArrayList_def.hpp"
//  Writing Method size for method: ::System::Collections::__ArrayList__ArrayListEnumeratorSimple._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__ArrayList__ArrayListEnumeratorSimple::*)(::System::Collections::ArrayList*)>(
    &::System::Collections::__ArrayList__ArrayListEnumeratorSimple::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x258760c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__ArrayList__ArrayListEnumeratorSimple.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__ArrayList__ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::__ArrayList__ArrayListEnumeratorSimple::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2587714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "Clone",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__ArrayList__ArrayListEnumeratorSimple.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::__ArrayList__ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::__ArrayList__ArrayListEnumeratorSimple::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x258771c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__ArrayList__ArrayListEnumeratorSimple.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::__ArrayList__ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::__ArrayList__ArrayListEnumeratorSimple::get_Current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25878ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "get_Current",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::__ArrayList__ArrayListEnumeratorSimple.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::__ArrayList__ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::__ArrayList__ArrayListEnumeratorSimple::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25879c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::__ArrayList__ArrayListEnumeratorSimple::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::__ArrayList__ArrayListEnumeratorSimple::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::ArrayList*& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Collections::__ArrayList__ArrayListEnumeratorSimple::__set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Collections::__ArrayList__ArrayListEnumeratorSimple::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::__ArrayList__ArrayListEnumeratorSimple::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr void System::Collections::__ArrayList__ArrayListEnumeratorSimple::__set__currentElement(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__isArrayList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArrayList;
}
constexpr bool const& System::Collections::__ArrayList__ArrayListEnumeratorSimple::__get__isArrayList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArrayList;
}
constexpr void System::Collections::__ArrayList__ArrayListEnumeratorSimple::__set__isArrayList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isArrayList = value;
}
inline void System::Collections::__ArrayList__ArrayListEnumeratorSimple::setStaticF_s_dummyObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_dummyObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Collections::__ArrayList__ArrayListEnumeratorSimple::getStaticF_s_dummyObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_dummyObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get>();
}
inline ::System::Collections::__ArrayList__ArrayListEnumeratorSimple* System::Collections::__ArrayList__ArrayListEnumeratorSimple::New_ctor(::System::Collections::ArrayList* list) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>(list));
}
inline void System::Collections::__ArrayList__ArrayListEnumeratorSimple::_ctor(::System::Collections::ArrayList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::System::Object* System::Collections::__ArrayList__ArrayListEnumeratorSimple::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::__ArrayList__ArrayListEnumeratorSimple::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::__ArrayList__ArrayListEnumeratorSimple::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Collections::__ArrayList__ArrayListEnumeratorSimple::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::__ArrayList__ArrayListEnumeratorSimple*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::__ArrayList__ArrayListEnumeratorSimple::__ArrayList__ArrayListEnumeratorSimple() {}
// Ctor Parameters []
constexpr ::System::Collections::__ArrayList__ArrayListDebugView::__ArrayList__ArrayListDebugView() {}
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x257e188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2583920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::ICollection*)>(
    &::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2583a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.set_Capacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::set_Capacity)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2583c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2583d2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2583d34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2583d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2583d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2583d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::get_Item)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2583dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Object*)>(
    &::System::Collections::ArrayList::set_Item)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2583e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Adapter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::IList*)>(&::System::Collections::ArrayList::Adapter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2583f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "Adapter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x258400c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.AddRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::ICollection*)>(
    &::System::Collections::ArrayList::AddRange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2584110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x258412c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Clone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2584168;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Contains)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25841f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Array*)>(&::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25842b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Array*, int32_t)>(&::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25842c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Array*, int32_t, int32_t)>(
    &::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2584374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.EnsureCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::EnsureCapacity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25840b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "EnsureCapacity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::ArrayList::*)()>(
    &::System::Collections::ArrayList::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x258447c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.IndexOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::IndexOf)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25844e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Object*)>(&::System::Collections::ArrayList::Insert)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x25844f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.InsertRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Collections::ICollection*)>(
    &::System::Collections::ArrayList::InsertRange)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x258462c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::ArrayList*)>(
    &::System::Collections::ArrayList::ReadOnly)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2584890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "ReadOnly", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2584944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.RemoveAt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::RemoveAt)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2584984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.RemoveRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t)>(&::System::Collections::ArrayList::RemoveRange)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2584a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Reverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Reverse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2584bd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Reverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t)>(&::System::Collections::ArrayList::Reverse)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2584c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::IComparer*)>(
    &::System::Collections::ArrayList::Sort)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2584d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Sort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t, ::System::Collections::IComparer*)>(
    &::System::Collections::ArrayList::Sort)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2584d98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Collections::ArrayList::*)()>(
    &::System::Collections::ArrayList::ToArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2584e9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::System::Collections::ArrayList::*)(::System::Type*)>(
    &::System::Collections::ArrayList::ToArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2584f6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 49));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::ArrayList::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::ArrayList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::ArrayList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::ArrayList::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Collections::ArrayList::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Collections::ArrayList::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void System::Collections::ArrayList::__set__items(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Collections::ArrayList::__get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr int32_t const& System::Collections::ArrayList::__get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr void System::Collections::ArrayList::__set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
constexpr int32_t& System::Collections::ArrayList::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::ArrayList::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::ArrayList::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::ArrayList::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::ArrayList::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::ArrayList::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ArrayList*>());
}
inline void System::Collections::ArrayList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ArrayList*>(capacity));
}
inline void System::Collections::ArrayList::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor(::System::Collections::ICollection* c) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ArrayList*>(c));
}
inline void System::Collections::ArrayList::_ctor(::System::Collections::ICollection* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void System::Collections::ArrayList::set_Capacity(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Collections::ArrayList::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsFixedSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
inline void System::Collections::ArrayList::set_Item(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::Adapter(::System::Collections::IList* list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "Adapter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method, list);
}
inline int32_t System::Collections::ArrayList::Add(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::Collections::ArrayList::AddRange(::System::Collections::ICollection* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void System::Collections::ArrayList::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::Contains(::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline void System::Collections::ArrayList::CopyTo(::System::Array* array) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline void System::Collections::ArrayList::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::ArrayList::CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, array, arrayIndex, count);
}
inline void System::Collections::ArrayList::EnsureCapacity(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "EnsureCapacity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min);
}
inline ::System::Collections::IEnumerator* System::Collections::ArrayList::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Collections::ArrayList::IndexOf(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline void System::Collections::ArrayList::Insert(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::Collections::ArrayList::InsertRange(int32_t index, ::System::Collections::ICollection* c) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, c);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::ReadOnly(::System::Collections::ArrayList* list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), "ReadOnly", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method, list);
}
inline void System::Collections::ArrayList::Remove(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Collections::ArrayList::RemoveAt(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Collections::ArrayList::RemoveRange(int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
inline void System::Collections::ArrayList::Reverse() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::ArrayList::Reverse(int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
inline void System::Collections::ArrayList::Sort(::System::Collections::IComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
inline void System::Collections::ArrayList::Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count, comparer);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Collections::ArrayList::ToArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::System::Array* System::Collections::ArrayList::ToArray(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ArrayList*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Collections::ArrayList::ArrayList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
