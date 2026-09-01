#pragma once
// IWYU pragma private; include "System\Collections\Queue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Queue_QueueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue_QueueEnumerator::*)(::System::Collections::Queue*)>(&::System::Collections::Queue_QueueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5be65c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Queue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue_QueueEnumerator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue_QueueEnumerator::*)()>(&::System::Collections::Queue_QueueEnumerator::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be6794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue_QueueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Queue_QueueEnumerator::*)()>(&::System::Collections::Queue_QueueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5be6798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue_QueueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue_QueueEnumerator::*)()>(&::System::Collections::Queue_QueueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5be6864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue_QueueEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue_QueueEnumerator::*)()>(&::System::Collections::Queue_QueueEnumerator::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5be68f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Queue*& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____q;
}
constexpr ::System::Collections::Queue* const& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____q;
}
constexpr void System::Collections::Queue_QueueEnumerator::__cordl_internal_set__q(::System::Collections::Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____q = value;
}
constexpr int32_t& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Collections::Queue_QueueEnumerator::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr int32_t& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Queue_QueueEnumerator::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__currentElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr ::System::Object* const& System::Collections::Queue_QueueEnumerator::__cordl_internal_get__currentElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElement;
}
constexpr void System::Collections::Queue_QueueEnumerator::__cordl_internal_set__currentElement(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentElement = value;
}
inline void System::Collections::Queue_QueueEnumerator::_ctor(::System::Collections::Queue* q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Queue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, q);
}
inline ::System::Object* System::Collections::Queue_QueueEnumerator::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Queue_QueueEnumerator::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue_QueueEnumerator::get_Current() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::Queue_QueueEnumerator::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue_QueueEnumerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Queue_QueueEnumerator* System::Collections::Queue_QueueEnumerator::New_ctor(::System::Collections::Queue* q) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Queue_QueueEnumerator*>(q));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Collections::Queue_QueueEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::Queue_QueueEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Queue_QueueEnumerator::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::Queue_QueueEnumerator::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Queue_QueueEnumerator::Queue_QueueEnumerator() {}
// Ctor Parameters []
constexpr ::System::Collections::Queue_QueueDebugView::Queue_QueueDebugView() {}
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)()>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5be5bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be5d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(int32_t, float_t)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5be5be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(::System::Collections::ICollection*)>(&::System::Collections::Queue::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5be5da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be6024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Clone)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5be602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be6110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::get_SyncRoot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5be6118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(::System::Array*, int32_t)>(&::System::Collections::Queue::CopyTo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5be6184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Enqueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(::System::Object*)>(&::System::Collections::Queue::Enqueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5be6364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::GetEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5be654c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Dequeue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Dequeue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5be65fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue::*)()>(&::System::Collections::Queue::Peek)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5be66c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ::i2c::class_of<::System::Collections::Queue*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::GetElement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5be6754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Queue.SetCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Queue::*)(int32_t)>(&::System::Collections::Queue::SetCapacity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5be6460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Object*>& System::Collections::Queue::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr ::ArrayW<::System::Object*> const& System::Collections::Queue::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr void System::Collections::Queue::__cordl_internal_set__array(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____array = value;
}
constexpr int32_t& System::Collections::Queue::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
constexpr int32_t const& System::Collections::Queue::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
constexpr void System::Collections::Queue::__cordl_internal_set__head(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____head = value;
}
constexpr int32_t& System::Collections::Queue::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
constexpr int32_t const& System::Collections::Queue::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
constexpr void System::Collections::Queue::__cordl_internal_set__tail(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tail = value;
}
constexpr int32_t& System::Collections::Queue::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr int32_t const& System::Collections::Queue::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr void System::Collections::Queue::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
constexpr int32_t& System::Collections::Queue::__cordl_internal_get__growFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____growFactor;
}
constexpr int32_t const& System::Collections::Queue::__cordl_internal_get__growFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____growFactor;
}
constexpr void System::Collections::Queue::__cordl_internal_set__growFactor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____growFactor = value;
}
constexpr int32_t& System::Collections::Queue::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& System::Collections::Queue::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::Collections::Queue::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& System::Collections::Queue::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr ::System::Object* const& System::Collections::Queue::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
constexpr void System::Collections::Queue::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
inline void System::Collections::Queue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Queue::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Queue::_ctor(int32_t capacity, float_t growFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, growFactor);
}
inline void System::Collections::Queue::_ctor(::System::Collections::ICollection* col) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline int32_t System::Collections::Queue::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Queue::get_IsSynchronized() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::get_SyncRoot() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Collections::Queue::CopyTo(::System::Array* array, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void System::Collections::Queue::Enqueue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Collections::IEnumerator* System::Collections::Queue::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Dequeue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::Peek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Queue*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Queue::GetElement(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { "GetElement", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, i);
}
inline void System::Collections::Queue::SetCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Queue*>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Queue*>());
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Queue*>(capacity));
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(int32_t capacity, float_t growFactor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Queue*>(capacity, growFactor));
}
inline ::System::Collections::Queue* System::Collections::Queue::New_ctor(::System::Collections::ICollection* col) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Queue*>(col));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Collections::Queue::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Queue::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Collections::Queue::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Queue::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Collections::Queue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Collections::Queue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Queue::Queue() {}
