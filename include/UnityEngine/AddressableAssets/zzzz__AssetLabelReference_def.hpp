#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetLabelReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetLabelReference)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetLabelReference);
// Dependencies System.Object, UnityEngine.AddressableAssets.IKeyEvaluator
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.AssetLabelReference
class CORDL_TYPE AssetLabelReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RuntimeKey)) ::System::Object* RuntimeKey;

  __declspec(property(get = get_labelString, put = set_labelString)) ::StringW labelString;

  /// @brief Field m_LabelString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LabelString, put = __cordl_internal_set_m_LabelString)) ::StringW m_LabelString;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept;

  /// @brief Method GetHashCode, addr 0x44f3b64, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::AddressableAssets::AssetLabelReference* New_ctor();

  /// @brief Method RuntimeKeyIsValid, addr 0x44f3ae8, size 0x7c, virtual true, abstract: false, final true
  inline bool RuntimeKeyIsValid();

  constexpr ::StringW const& __cordl_internal_get_m_LabelString() const;

  constexpr ::StringW& __cordl_internal_get_m_LabelString();

  constexpr void __cordl_internal_set_m_LabelString(::StringW value);

  /// @brief Method .ctor, addr 0x44f3b84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RuntimeKey, addr 0x44f3a90, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* get_RuntimeKey();

  /// @brief Method get_labelString, addr 0x44f3a80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_labelString();

  /// @brief Convert to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr ::UnityEngine::AddressableAssets::IKeyEvaluator* i___UnityEngine__AddressableAssets__IKeyEvaluator() noexcept;

  /// @brief Method set_labelString, addr 0x44f3a88, size 0x8, virtual false, abstract: false, final false
  inline void set_labelString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetLabelReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetLabelReference(AssetLabelReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetLabelReference(AssetLabelReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16177 };

  /// @brief Field m_LabelString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_LabelString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::AssetLabelReference, ___m_LabelString) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetLabelReference, 0x18>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetLabelReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetLabelReference*, "UnityEngine.AddressableAssets", "AssetLabelReference");
