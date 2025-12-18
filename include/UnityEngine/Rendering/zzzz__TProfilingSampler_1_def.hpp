#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TProfilingSampler_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TProfilingSampler_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TEnum> class TProfilingSampler_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::TProfilingSampler_1);
// Dependencies UnityEngine.Rendering.ProfilingSampler
namespace UnityEngine::Rendering {
// cpp template
template <typename TEnum>
// Is value type: false
// CS Name: UnityEngine.Rendering.TProfilingSampler`1<TEnum>
class CORDL_TYPE TProfilingSampler_1 : public ::UnityEngine::Rendering::ProfilingSampler {
public:
  // Declarations
  /// @brief Field samples, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_samples, put = setStaticF_samples)) ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* samples;

  static inline ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* getStaticF_samples();

  static inline void setStaticF_samples(::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TProfilingSampler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TProfilingSampler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TProfilingSampler_1(TProfilingSampler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TProfilingSampler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TProfilingSampler_1(TProfilingSampler_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::TProfilingSampler_1, "UnityEngine.Rendering", "TProfilingSampler`1");
