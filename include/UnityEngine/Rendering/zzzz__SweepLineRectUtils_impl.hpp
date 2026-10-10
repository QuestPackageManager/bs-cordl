#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SweepLineRectUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SweepLineRectUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SweepLineRectUtils_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils_EventComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SweepLineRectUtils_EventComparer::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::SweepLineRectUtils_EventComparer::Compare)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6be615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils_EventComparer>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::SweepLineRectUtils_EventComparer::Compare(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils_EventComparer>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>"
constexpr UnityEngine::Rendering::SweepLineRectUtils_EventComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>*
UnityEngine::Rendering::SweepLineRectUtils_EventComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__Vector4_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SweepLineRectUtils_EventComparer::SweepLineRectUtils_EventComparer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::Compare)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6be6200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::Compare(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
constexpr UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*
UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__Vector2_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer::SweepLineRectUtils_ActiveComparer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils.CalculateRectUnionArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Collections::Generic::List_1<::UnityEngine::Rect>*)>(
    &::UnityEngine::Rendering::SweepLineRectUtils::CalculateRectUnionArea)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x6bdedd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                                                             { "CalculateRectUnionArea", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils.MergeLengthY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::UnityEngine::Rendering::SweepLineRectUtils::MergeLengthY)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6be609c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                                                                                           { "MergeLengthY", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils.CalculateRectUnionArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector2>, int32_t)>(
    &::UnityEngine::Rendering::SweepLineRectUtils::CalculateRectUnionArea)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6be5d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                            { "CalculateRectUnionArea", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SweepLineRectUtils.InsertEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect const>, ::ArrayW<::UnityEngine::Vector4>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::SweepLineRectUtils::InsertEvents)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6be5ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                         { "InsertEvents", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rect const>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::SweepLineRectUtils::CalculateRectUnionArea(::System::Collections::Generic::List_1<::UnityEngine::Rect>* rects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                                                           { "CalculateRectUnionArea", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rect>*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rects);
}
inline float_t UnityEngine::Rendering::SweepLineRectUtils::MergeLengthY(::ArrayW<::UnityEngine::Vector2> activeBuffer, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                                                                                         { "MergeLengthY", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, activeBuffer, count);
}
inline float_t UnityEngine::Rendering::SweepLineRectUtils::CalculateRectUnionArea(::ArrayW<::UnityEngine::Vector4> eventsBuffer, ::ArrayW<::UnityEngine::Vector2> activeBuffer, int32_t eventCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                          { "CalculateRectUnionArea", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, eventsBuffer, activeBuffer, eventCount);
}
inline void UnityEngine::Rendering::SweepLineRectUtils::InsertEvents(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rect const> rect, ::ArrayW<::UnityEngine::Vector4> eventsBuffer,
                                                                     ::by_ref<int32_t> eventCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SweepLineRectUtils*>(),
                          { "InsertEvents", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rect const>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, eventsBuffer, eventCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SweepLineRectUtils::SweepLineRectUtils() {}
