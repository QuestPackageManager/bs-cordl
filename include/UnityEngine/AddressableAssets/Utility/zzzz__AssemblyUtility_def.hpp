#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/AssemblyUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AssemblyUtility)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class AssemblyUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::Utility::AssemblyUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::Utility::AssemblyUtility*, "UnityEngine.AddressableAssets.Utility", "AssemblyUtility");
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Utility.AssemblyUtility
class CORDL_TYPE AssemblyUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAssemblies, addr 0x688c928, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetAssemblies();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyUtility(AssemblyUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyUtility(AssemblyUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AddressableAssets::Utility::AssemblyUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
