#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayTypes)
namespace GlobalNamespace {
struct GameplayType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayTypes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayTypes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayTypes*, "", "GameplayTypes");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayTypes
class CORDL_TYPE GameplayTypes : public ::System::Object {
public:
  // Declarations
  /// @brief Field kAllGameplayTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kAllGameplayTypes, put = setStaticF_kAllGameplayTypes)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>* kAllGameplayTypes;

  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>* getStaticF_kAllGameplayTypes();

  static inline void setStaticF_kAllGameplayTypes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::GameplayType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayTypes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypes", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayTypes(GameplayTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypes", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayTypes(GameplayTypes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14318 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameplayTypes) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
