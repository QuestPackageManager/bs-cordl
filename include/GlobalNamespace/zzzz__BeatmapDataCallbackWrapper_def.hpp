#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataCallbackWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCallbackWrapper)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataCallbackWrapper);
// Type: ::BeatmapDataCallbackWrapper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataCallbackWrapper*
class CORDL_TYPE BeatmapDataCallbackWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field BasicBeatmapEventType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BasicBeatmapEventType, put = __cordl_internal_set_BasicBeatmapEventType)) ::System::Type* BasicBeatmapEventType;

  /// @brief Field aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_aheadTime, put = __cordl_internal_set_aheadTime)) float_t aheadTime;

  /// @brief Field subtypeIdentifiers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_subtypeIdentifiers, put = __cordl_internal_set_subtypeIdentifiers)) ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers;

  /// @brief Method CallCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData);

  static inline ::GlobalNamespace::BeatmapDataCallbackWrapper* New_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers);

  constexpr ::System::Type*& __cordl_internal_get_BasicBeatmapEventType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_BasicBeatmapEventType() const;

  constexpr float_t const& __cordl_internal_get_aheadTime() const;

  constexpr float_t& __cordl_internal_get_aheadTime();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_subtypeIdentifiers() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_subtypeIdentifiers();

  constexpr void __cordl_internal_set_BasicBeatmapEventType(::System::Type* value);

  constexpr void __cordl_internal_set_aheadTime(float_t value);

  constexpr void __cordl_internal_set_subtypeIdentifiers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3a83a58, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCallbackWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper const&) = delete;

  /// @brief Field BasicBeatmapEventType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___BasicBeatmapEventType;

  /// @brief Field aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ___aheadTime;

  /// @brief Field subtypeIdentifiers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___subtypeIdentifiers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCallbackWrapper, ___BasicBeatmapEventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCallbackWrapper, ___aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataCallbackWrapper, ___subtypeIdentifiers) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCallbackWrapper*, "", "BeatmapDataCallbackWrapper");
