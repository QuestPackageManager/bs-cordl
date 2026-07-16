#pragma once
// IWYU pragma private; include "System/Threading/Interlocked.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Interlocked_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>, int32_t, int32_t)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb2964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                             { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>, int32_t, int32_t, ::by_ref<bool>)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cb6018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                         { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Object*>, ::by_ref<::System::Object*>, ::by_ref<::System::Object*>, ::by_ref<::System::Object*>)>(
    &::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cb6050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "CompareExchange",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                                                                   ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::System::Object*>, ::System::Object*, ::System::Object*)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb608c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                         { "CompareExchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<float_t>, float_t, float_t)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb60b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                             { "CompareExchange", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>)>(&::System::Threading::Interlocked::Decrement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb60d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Decrement", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Decrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>)>(&::System::Threading::Interlocked::Decrement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb60f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Decrement", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>)>(&::System::Threading::Interlocked::Increment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Increment", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>)>(&::System::Threading::Interlocked::Increment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Increment", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>, int32_t)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb3e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Object*>, ::by_ref<::System::Object*>, ::by_ref<::System::Object*>)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb6158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                            { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<::System::Object*>, ::System::Object*)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<float_t>, float_t)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb61a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>, int64_t, int64_t)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb61c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                             { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::System::IntPtr>, ::System::IntPtr, ::System::IntPtr)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb61e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                { "CompareExchange", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.CompareExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<double_t>, double_t, double_t)>(&::System::Threading::Interlocked::CompareExchange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb6200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                             { "CompareExchange", {}, { ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>, int64_t)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::System::IntPtr>, ::System::IntPtr)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                                                           { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Exchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<double_t>, double_t)>(&::System::Threading::Interlocked::Exchange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb6264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>)>(&::System::Threading::Interlocked::Read)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cb6284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>, int32_t)>(&::System::Threading::Interlocked::Add)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb62a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Add", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<int64_t>, int64_t)>(&::System::Threading::Interlocked::Add)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb62c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Add", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Interlocked.MemoryBarrier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Interlocked::MemoryBarrier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb62e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "MemoryBarrier", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Threading::Interlocked::CompareExchange(::by_ref<int32_t> location1, int32_t value, int32_t comparand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                           { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, value, comparand);
}
inline int32_t System::Threading::Interlocked::CompareExchange(::by_ref<int32_t> location1, int32_t value, int32_t comparand, ::by_ref<bool> succeeded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                       { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, value, comparand, succeeded);
}
inline void System::Threading::Interlocked::CompareExchange(::by_ref<::System::Object*> location1, ::by_ref<::System::Object*> value, ::by_ref<::System::Object*> comparand,
                                                            ::by_ref<::System::Object*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "CompareExchange",
                                                                                               {},
                                                                                               { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                                                                 ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location1, value, comparand, result);
}
inline ::System::Object* System::Threading::Interlocked::CompareExchange(::by_ref<::System::Object*> location1, ::System::Object* value, ::System::Object* comparand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                              { "CompareExchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, location1, value, comparand);
}
inline float_t System::Threading::Interlocked::CompareExchange(::by_ref<float_t> location1, float_t value, float_t comparand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                           { "CompareExchange", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, location1, value, comparand);
}
inline int32_t System::Threading::Interlocked::Decrement(::by_ref<int32_t> location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Decrement", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location);
}
inline int64_t System::Threading::Interlocked::Decrement(::by_ref<int64_t> location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Decrement", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location);
}
inline int32_t System::Threading::Interlocked::Increment(::by_ref<int32_t> location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Increment", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location);
}
inline int64_t System::Threading::Interlocked::Increment(::by_ref<int64_t> location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Increment", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location);
}
inline int32_t System::Threading::Interlocked::Exchange(::by_ref<int32_t> location1, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, value);
}
inline void System::Threading::Interlocked::Exchange(::by_ref<::System::Object*> location1, ::by_ref<::System::Object*> value, ::by_ref<::System::Object*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                          { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location1, value, result);
}
inline ::System::Object* System::Threading::Interlocked::Exchange(::by_ref<::System::Object*> location1, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                                                         { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, location1, value);
}
inline float_t System::Threading::Interlocked::Exchange(::by_ref<float_t> location1, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, location1, value);
}
inline int64_t System::Threading::Interlocked::CompareExchange(::by_ref<int64_t> location1, int64_t value, int64_t comparand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                           { "CompareExchange", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location1, value, comparand);
}
inline ::System::IntPtr System::Threading::Interlocked::CompareExchange(::by_ref<::System::IntPtr> location1, ::System::IntPtr value, ::System::IntPtr comparand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                              { "CompareExchange", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, location1, value, comparand);
}
inline double_t System::Threading::Interlocked::CompareExchange(::by_ref<double_t> location1, double_t value, double_t comparand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                           { "CompareExchange", {}, { ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, location1, value, comparand);
}
template <typename T> inline T System::Threading::Interlocked::CompareExchange(::by_ref<T> location1, T value, T comparand) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                           { "CompareExchange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, location1, value, comparand);
}
inline int64_t System::Threading::Interlocked::Exchange(::by_ref<int64_t> location1, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location1, value);
}
inline ::System::IntPtr System::Threading::Interlocked::Exchange(::by_ref<::System::IntPtr> location1, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(),
                                                                                         { "Exchange", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, location1, value);
}
inline double_t System::Threading::Interlocked::Exchange(::by_ref<double_t> location1, double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", {}, { ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, location1, value);
}
template <typename T> inline T System::Threading::Interlocked::Exchange(::by_ref<T> location1, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Exchange", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, location1, value);
}
inline int64_t System::Threading::Interlocked::Read(::by_ref<int64_t> location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Read", {}, { ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location);
}
inline int32_t System::Threading::Interlocked::Add(::by_ref<int32_t> location1, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Add", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location1, value);
}
inline int64_t System::Threading::Interlocked::Add(::by_ref<int64_t> location1, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "Add", {}, { ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, location1, value);
}
inline void System::Threading::Interlocked::MemoryBarrier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Interlocked*>(), { "MemoryBarrier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Interlocked::Interlocked() {}
