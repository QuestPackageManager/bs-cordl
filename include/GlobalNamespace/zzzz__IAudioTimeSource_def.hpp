#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAudioTimeSource)
// Forward declare root types
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAudioTimeSource);
// Type: ::IAudioTimeSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4011))
// CS Name: ::IAudioTimeSource*
class CORDL_TYPE IAudioTimeSource {
public:
  // Declarations
  __declspec(property(get = get_songTime)) float_t songTime;

  __declspec(property(get = get_lastFrameDeltaSongTime)) float_t lastFrameDeltaSongTime;

  __declspec(property(get = get_songEndTime)) float_t songEndTime;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_isReady)) bool isReady;

  /// @brief Method get_songTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_songTime();

  /// @brief Method get_lastFrameDeltaSongTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_lastFrameDeltaSongTime();

  /// @brief Method get_songEndTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_songEndTime();

  /// @brief Method get_songLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_songLength();

  /// @brief Method get_isReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isReady();

  // Ctor Parameters [CppParam { name: "", ty: "IAudioTimeSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAudioTimeSource(IAudioTimeSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAudioTimeSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioTimeSource(IAudioTimeSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAudioTimeSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAudioTimeSource*, "", "IAudioTimeSource");
