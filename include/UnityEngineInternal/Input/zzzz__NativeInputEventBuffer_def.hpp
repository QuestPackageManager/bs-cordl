#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputEventBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEventBuffer)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEventBuffer);
// Dependencies
namespace UnityEngineInternal::Input {
// Is value type: true
// CS Name: UnityEngineInternal.Input.NativeInputEventBuffer
#pragma pack(push, 1)
struct CORDL_TYPE NativeInputEventBuffer {
public:
  // Declarations
  /// @brief Field capacityInBytes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_capacityInBytes, put = __cordl_internal_set_capacityInBytes)) int32_t capacityInBytes;

  /// @brief Field eventBuffer, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBuffer, put = __cordl_internal_set_eventBuffer)) ::cordl_internals::Ptr<void> eventBuffer;

  /// @brief Field eventCount, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_eventCount, put = __cordl_internal_set_eventCount)) int32_t eventCount;

  /// @brief Field sizeInBytes, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeInBytes, put = __cordl_internal_set_sizeInBytes)) int32_t sizeInBytes;

  constexpr int32_t const& __cordl_internal_get_capacityInBytes() const;

  constexpr int32_t& __cordl_internal_get_capacityInBytes();

  constexpr ::cordl_internals::Ptr<void> const& __cordl_internal_get_eventBuffer() const;

  constexpr ::cordl_internals::Ptr<void>& __cordl_internal_get_eventBuffer();

  constexpr int32_t const& __cordl_internal_get_eventCount() const;

  constexpr int32_t& __cordl_internal_get_eventCount();

  constexpr int32_t const& __cordl_internal_get_sizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_sizeInBytes();

  constexpr void __cordl_internal_set_capacityInBytes(int32_t value);

  constexpr void __cordl_internal_set_eventBuffer(::cordl_internals::Ptr<void> value);

  constexpr void __cordl_internal_set_eventCount(int32_t value);

  constexpr void __cordl_internal_set_sizeInBytes(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputEventBuffer();

  // Ctor Parameters [CppParam { name: "eventBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeInputEventBuffer(::cordl_internals::Ptr<void> eventBuffer, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___eventBuffer_padding[0x0];
      /// @brief Field eventBuffer, offset: 0x0, size: 0x8, def value: None
      ::cordl_internals::Ptr<void> ___eventBuffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___eventBuffer_padding_forAlignment[0x0];
      /// @brief Field eventBuffer, offset: 0x0, size: 0x8, def value: None
      ::cordl_internals::Ptr<void> ___eventBuffer_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___eventCount_padding[0x8];
      /// @brief Field eventCount, offset: 0x8, size: 0x4, def value: None
      int32_t ___eventCount;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___eventCount_padding_forAlignment[0x8];
      /// @brief Field eventCount, offset: 0x8, size: 0x4, def value: None
      int32_t ___eventCount_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___sizeInBytes_padding[0xc];
      /// @brief Field sizeInBytes, offset: 0xc, size: 0x4, def value: None
      int32_t ___sizeInBytes;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___sizeInBytes_padding_forAlignment[0xc];
      /// @brief Field sizeInBytes, offset: 0xc, size: 0x4, def value: None
      int32_t ___sizeInBytes_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___capacityInBytes_padding[0x10];
      /// @brief Field capacityInBytes, offset: 0x10, size: 0x4, def value: None
      int32_t ___capacityInBytes;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___capacityInBytes_padding_forAlignment[0x10];
      /// @brief Field capacityInBytes, offset: 0x10, size: 0x4, def value: None
      int32_t ___capacityInBytes_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEventBuffer, 0x14>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventBuffer, "UnityEngineInternal.Input", "NativeInputEventBuffer");
