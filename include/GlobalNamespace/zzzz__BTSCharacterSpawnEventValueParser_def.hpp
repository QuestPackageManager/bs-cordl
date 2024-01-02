#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterSpawnEventValueParser)
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnEventValueParser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnEventValueParser);
// Type: ::BTSCharacterSpawnEventValueParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3974))
// CS Name: ::BTSCharacterSpawnEventValueParser*
class CORDL_TYPE BTSCharacterSpawnEventValueParser : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPrefabId, addr 0x221bdbc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetPrefabId(int32_t value);

  /// @brief Method GetAnimationId, addr 0x221bdc4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetAnimationId(int32_t value);

  /// @brief Method GetIsAlternativeMaterial, addr 0x221c1fc, size 0x8, virtual false, abstract: false, final false
  static inline bool GetIsAlternativeMaterial(int32_t value);

  /// @brief Method MergeValuesIntoOneInt, addr 0x221c334, size 0x18, virtual false, abstract: false, final false
  static inline int32_t MergeValuesIntoOneInt(int32_t prefabId, int32_t animationId, bool isAlternativeMaterial);

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventValueParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterSpawnEventValueParser(BTSCharacterSpawnEventValueParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventValueParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterSpawnEventValueParser(BTSCharacterSpawnEventValueParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterSpawnEventValueParser();

public:
  /// @brief Field kPrefabMask offset 0xffffffff size 0x4
  static constexpr int32_t kPrefabMask{ static_cast<int32_t>(0xff) };

  /// @brief Field kPrefabBitOffset offset 0xffffffff size 0x4
  static constexpr int32_t kPrefabBitOffset{ static_cast<int32_t>(0x0) };

  /// @brief Field kAnimationMask offset 0xffffffff size 0x4
  static constexpr int32_t kAnimationMask{ static_cast<int32_t>(0xff00) };

  /// @brief Field kAnimationBitOffset offset 0xffffffff size 0x4
  static constexpr int32_t kAnimationBitOffset{ static_cast<int32_t>(0x8) };

  /// @brief Field kAlternativeMaterialMask offset 0xffffffff size 0x4
  static constexpr int32_t kAlternativeMaterialMask{ static_cast<int32_t>(0x10000) };

  /// @brief Field kAlternativeMaterialOffset offset 0xffffffff size 0x4
  static constexpr int32_t kAlternativeMaterialOffset{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnEventValueParser, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnEventValueParser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnEventValueParser*, "", "BTSCharacterSpawnEventValueParser");
