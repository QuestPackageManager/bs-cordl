#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrUuid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrUuid)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrUuid;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid, "UnityEngine.XR.OpenXR.NativeTypes", "XrUuid");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrUuid
struct CORDL_TYPE XrUuid {
public:
  // Declarations
  __declspec(property(get = get_dataPart1)) uint64_t dataPart1;

  __declspec(property(get = get_dataPart2)) uint64_t dataPart2;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>*();

  /// @brief Method Equals, addr 0x6e49004, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid other);

  /// @brief Method ToString, addr 0x6e49028, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6e48fec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t dataPart1, uint64_t dataPart2);

  /// [CompilerGenerated]
  /// @brief Method get_dataPart1, addr 0x6e48ff4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_dataPart1();

  /// [CompilerGenerated]
  /// @brief Method get_dataPart2, addr 0x6e48ffc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_dataPart2();

  /// @brief Method get_empty, addr 0x6e48fe0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid get_empty();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrUuid_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrUuid();

  // Ctor Parameters [CppParam { name: "_dataPart1_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dataPart2_k__BackingField", ty: "uint64_t",
  // modifiers: "", def_value: None, comment: None }]
  constexpr XrUuid(uint64_t _dataPart1_k__BackingField, uint64_t _dataPart2_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17599 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [CompilerGenerated]
  /// @brief Field <dataPart1>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _dataPart1_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <dataPart2>k__BackingField, offset: 0x8, size: 0x8, def value: None
  uint64_t _dataPart2_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid, _dataPart1_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid, _dataPart2_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
