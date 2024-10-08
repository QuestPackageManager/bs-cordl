#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/IKeyEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyEvaluator)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::IKeyEvaluator);
// Type: UnityEngine.AddressableAssets::IKeyEvaluator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets::IKeyEvaluator*
class CORDL_TYPE IKeyEvaluator {
public:
  // Declarations
  __declspec(property(get = get_RuntimeKey)) ::System::Object* RuntimeKey;

  /// @brief Method RuntimeKeyIsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RuntimeKeyIsValid();

  /// @brief Method get_RuntimeKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_RuntimeKey();

  // Ctor Parameters [CppParam { name: "", ty: "IKeyEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKeyEvaluator(IKeyEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyEvaluator(IKeyEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16140 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::IKeyEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::IKeyEvaluator*, "UnityEngine.AddressableAssets", "IKeyEvaluator");
