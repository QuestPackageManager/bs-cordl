#pragma once
// IWYU pragma private; include "System/Collections/ArrayList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ArrayList_IListWrapper_def.hpp"
#include "System/Collections/zzzz__ArrayList_ReadOnlyArrayList_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Collections::ArrayList_ArrayListEnumeratorSimple._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList_ArrayListEnumeratorSimple::*)(::System::Collections::ArrayList*)>(
    &::System::Collections::ArrayList_ArrayListEnumeratorSimple::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5bea058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList_ArrayListEnumeratorSimple.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ArrayList_ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::ArrayList_ArrayListEnumeratorSimple::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bed1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList_ArrayListEnumeratorSimple.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ArrayList_ArrayListEnumeratorSimple::*)()>(&::System::Collections::ArrayList_ArrayListEnumeratorSimple::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5bed200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList_ArrayListEnumeratorSimple.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ArrayList_ArrayListEnumeratorSimple::*)()>(
    &::System::Collections::ArrayList_ArrayListEnumeratorSimple::get_Current)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bed3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList_ArrayListEnumeratorSimple.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList_ArrayListEnumeratorSimple::*)()>(&::System::Collections::ArrayList_ArrayListEnumeratorSimple::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bed4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
constexpr int32_t& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr ::System::Object* const& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr void System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_set__currentElement(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentElement = value;
}
constexpr bool& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__isArrayList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArrayList;
}
constexpr bool const& System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_get__isArrayList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArrayList;
}
constexpr void System::Collections::ArrayList_ArrayListEnumeratorSimple::__cordl_internal_set__isArrayList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isArrayList = value;
}
inline void System::Collections::ArrayList_ArrayListEnumeratorSimple::setStaticF_s_dummyObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_dummyObject", ::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Collections::ArrayList_ArrayListEnumeratorSimple::getStaticF_s_dummyObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_dummyObject", ::System::Collections::ArrayList_ArrayListEnumeratorSimple*>();
}
inline void System::Collections::ArrayList_ArrayListEnumeratorSimple::_ctor(::System::Collections::ArrayList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::System::Object* System::Collections::ArrayList_ArrayListEnumeratorSimple::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::ArrayList_ArrayListEnumeratorSimple::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList_ArrayListEnumeratorSimple::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::ArrayList_ArrayListEnumeratorSimple::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::ArrayList_ArrayListEnumeratorSimple* System::Collections::ArrayList_ArrayListEnumeratorSimple::New_ctor(::System::Collections::ArrayList* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ArrayList_ArrayListEnumeratorSimple*>(list));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::ArrayList_ArrayListEnumeratorSimple::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::ArrayList_ArrayListEnumeratorSimple::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::ArrayList_ArrayListEnumeratorSimple::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::ArrayList_ArrayListEnumeratorSimple::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::ArrayList_ArrayListEnumeratorSimple::ArrayList_ArrayListEnumeratorSimple() {}
// Ctor Parameters []
constexpr ::System::Collections::ArrayList_ArrayListDebugView::ArrayList_ArrayListDebugView() {}
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5be2d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5be949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::ICollection*)>(&::System::Collections::ArrayList::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5be95f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::set_Capacity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5be97cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be98ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be98f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be98fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be9904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5be990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::get_Item)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5be9978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Object*)>(&::System::Collections::ArrayList::set_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5be9a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Adapter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::IList*)>(&::System::Collections::ArrayList::Adapter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5be9b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "Adapter", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5be9bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.AddRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::ICollection*)>(&::System::Collections::ArrayList::AddRange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5be9cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5be9cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Clone)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5be9d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Contains)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5be9db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Array*)>(&::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5be9e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Array*, int32_t)>(&::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5be9e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Array*, int32_t, int32_t)>(&::System::Collections::ArrayList::CopyTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5be9f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.EnsureCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::EnsureCapacity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5be9c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5be9ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::IndexOf)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bea144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Object*)>(&::System::Collections::ArrayList::Insert)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5bea15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.InsertRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, ::System::Collections::ICollection*)>(&::System::Collections::ArrayList::InsertRange)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5bea290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::ArrayList*)>(&::System::Collections::ArrayList::ReadOnly)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bea4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "ReadOnly", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Object*)>(&::System::Collections::ArrayList::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bea5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t)>(&::System::Collections::ArrayList::RemoveAt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5bea5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.RemoveRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t)>(&::System::Collections::ArrayList::RemoveRange)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5bea6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::Reverse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bea83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t)>(&::System::Collections::ArrayList::Reverse)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bea874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(::System::Collections::IComparer*)>(&::System::Collections::ArrayList::Sort)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bea9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::ArrayList::*)(int32_t, int32_t, ::System::Collections::IComparer*)>(&::System::Collections::ArrayList::Sort)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5bea9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Collections::ArrayList::*)()>(&::System::Collections::ArrayList::ToArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5beab00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::ArrayList.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Collections::ArrayList::*)(::System::Type*)>(&::System::Collections::ArrayList::ToArray)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5beabf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ::i2c::class_of<::System::Collections::ArrayList*>(), 49 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Collections::ArrayList::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::System::Object*> const& System::Collections::ArrayList::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void System::Collections::ArrayList::__cordl_internal_set__items(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
constexpr int32_t& System::Collections::ArrayList::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr int32_t const& System::Collections::ArrayList::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr void System::Collections::ArrayList::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
constexpr int32_t& System::Collections::ArrayList::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::ArrayList::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::ArrayList::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::ArrayList::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::System::Object* const& System::Collections::ArrayList::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::ArrayList::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
inline void System::Collections::ArrayList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::ArrayList::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::ArrayList::_ctor(::System::Collections::ICollection* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void System::Collections::ArrayList::set_Capacity(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Collections::ArrayList::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsFixedSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Collections::ArrayList::set_Item(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::Adapter(::System::Collections::IList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "Adapter", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method, list);
}
inline int32_t System::Collections::ArrayList::Add(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::ArrayList::AddRange(::System::Collections::ICollection* c) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void System::Collections::ArrayList::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Collections::ArrayList::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::ArrayList::Contains(::System::Object* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void System::Collections::ArrayList::CopyTo(::System::Array* array) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void System::Collections::ArrayList::CopyTo(::System::Array* array, int32_t arrayIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline void System::Collections::ArrayList::CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline void System::Collections::ArrayList::EnsureCapacity(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min);
}
inline ::System::Collections::IEnumerator* System::Collections::ArrayList::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Collections::ArrayList::IndexOf(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Collections::ArrayList::Insert(int32_t index, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Collections::ArrayList::InsertRange(int32_t index, ::System::Collections::ICollection* c) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, c);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::ReadOnly(::System::Collections::ArrayList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ArrayList*>(), { "ReadOnly", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method, list);
}
inline void System::Collections::ArrayList::Remove(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Collections::ArrayList::RemoveAt(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void System::Collections::ArrayList::RemoveRange(int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void System::Collections::ArrayList::Reverse() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::ArrayList::Reverse(int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void System::Collections::ArrayList::Sort(::System::Collections::IComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
inline void System::Collections::ArrayList::Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count, comparer);
}
inline ::ArrayW<::System::Object*> System::Collections::ArrayList::ToArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Array* System::Collections::ArrayList::ToArray(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ArrayList*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, type);
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ArrayList*>());
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ArrayList*>(capacity));
}
inline ::System::Collections::ArrayList* System::Collections::ArrayList::New_ctor(::System::Collections::ICollection* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ArrayList*>(c));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr System::Collections::ArrayList::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Collections::ArrayList::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::ArrayList::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::ArrayList::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::ArrayList::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::ArrayList::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::ArrayList::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::ArrayList::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::ArrayList::ArrayList() {}
