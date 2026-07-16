#pragma once
// IWYU pragma private; include "System/Collections/ArrayList_IListWrapper.hpp"
#include "System/Collections/zzzz__ArrayList_impl.hpp"
#include "System/Collections/zzzz__ArrayList_IListWrapper_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Collections::IList*)>(&::GlobalNamespace::ArrayList_IListWrapper::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5be9bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::set_Capacity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5beaca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bead38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5beade0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::get_IsFixedSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5beae88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::get_IsSynchronized)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5beaf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::get_Item)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5beafd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, ::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::set_Item)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5beb08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::get_SyncRoot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5beb15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::Add)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5beb204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.AddRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Collections::ICollection*)>(
    &::GlobalNamespace::ArrayList_IListWrapper::AddRange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5beb2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::Clear)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5beb314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::Clone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5beb47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::Contains)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5beb4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Array*, int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::CopyTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5beb598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, ::System::Array*, int32_t, int32_t)>(
    &::GlobalNamespace::ArrayList_IListWrapper::CopyTo)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5beb654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ArrayList_IListWrapper::*)()>(
    &::GlobalNamespace::ArrayList_IListWrapper::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5beb98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::IndexOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5beba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Insert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, ::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::Insert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5bebae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.InsertRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, ::System::Collections::ICollection*)>(
    &::GlobalNamespace::ArrayList_IListWrapper::InsertRange)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5bebbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Object*)>(&::GlobalNamespace::ArrayList_IListWrapper::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bebf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.RemoveAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::RemoveAt)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bebfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.RemoveRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::RemoveRange)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5bec09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, int32_t)>(&::GlobalNamespace::ArrayList_IListWrapper::Reverse)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5bec2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArrayList_IListWrapper::*)(int32_t, int32_t, ::System::Collections::IComparer*)>(
    &::GlobalNamespace::ArrayList_IListWrapper::Sort)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5bec62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::GlobalNamespace::ArrayList_IListWrapper::*)()>(&::GlobalNamespace::ArrayList_IListWrapper::ToArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5bec8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayList_IListWrapper.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::GlobalNamespace::ArrayList_IListWrapper::*)(::System::Type*)>(&::GlobalNamespace::ArrayList_IListWrapper::ToArray)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5beca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 49 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& GlobalNamespace::ArrayList_IListWrapper::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::IList* const& GlobalNamespace::ArrayList_IListWrapper::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void GlobalNamespace::ArrayList_IListWrapper::__cordl_internal_set__list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline void GlobalNamespace::ArrayList_IListWrapper::_ctor(::System::Collections::IList* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void GlobalNamespace::ArrayList_IListWrapper::set_Capacity(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ArrayList_IListWrapper::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ArrayList_IListWrapper::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArrayList_IListWrapper::get_IsFixedSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ArrayList_IListWrapper::get_IsSynchronized() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ArrayList_IListWrapper::get_Item(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void GlobalNamespace::ArrayList_IListWrapper::set_Item(int32_t index, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Object* GlobalNamespace::ArrayList_IListWrapper::get_SyncRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ArrayList_IListWrapper::Add(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void GlobalNamespace::ArrayList_IListWrapper::AddRange(::System::Collections::ICollection* c) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void GlobalNamespace::ArrayList_IListWrapper::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ArrayList_IListWrapper::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool GlobalNamespace::ArrayList_IListWrapper::Contains(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void GlobalNamespace::ArrayList_IListWrapper::CopyTo(::System::Array* array, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void GlobalNamespace::ArrayList_IListWrapper::CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, array, arrayIndex, count);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ArrayList_IListWrapper::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ArrayList_IListWrapper::IndexOf(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArrayList_IListWrapper::Insert(int32_t index, ::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, obj);
}
inline void GlobalNamespace::ArrayList_IListWrapper::InsertRange(int32_t index, ::System::Collections::ICollection* c) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, c);
}
inline void GlobalNamespace::ArrayList_IListWrapper::Remove(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ArrayList_IListWrapper::RemoveAt(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::ArrayList_IListWrapper::RemoveRange(int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::ArrayList_IListWrapper::Reverse(int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
inline void GlobalNamespace::ArrayList_IListWrapper::Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count, comparer);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::ArrayList_IListWrapper::ToArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::System::Array* GlobalNamespace::ArrayList_IListWrapper::ToArray(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ArrayList_IListWrapper*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, type);
}
inline ::GlobalNamespace::ArrayList_IListWrapper* GlobalNamespace::ArrayList_IListWrapper::New_ctor(::System::Collections::IList* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArrayList_IListWrapper*>(list));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayList_IListWrapper::ArrayList_IListWrapper() {}
