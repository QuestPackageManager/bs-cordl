#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Sampling/SobolData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SobolData)
// Forward declare root types
namespace UnityEngine::Rendering::Sampling {
class SobolData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Sampling::SobolData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Sampling::SobolData*, "UnityEngine.Rendering.Sampling", "SobolData");
// Dependencies System.Object
namespace UnityEngine::Rendering::Sampling {
// Is value type: false
// CS Name: UnityEngine.Rendering.Sampling.SobolData
class CORDL_TYPE SobolData : public ::System::Object {
public:
  // Declarations
  /// @brief Field SobolMatrices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SobolMatrices, put = setStaticF_SobolMatrices)) ::ArrayW<uint32_t> SobolMatrices;

  static inline ::ArrayW<uint32_t> getStaticF_SobolMatrices();

  static inline void setStaticF_SobolMatrices(::ArrayW<uint32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SobolData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SobolData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SobolData(SobolData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SobolData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SobolData(SobolData const&) = delete;

  /// @brief Field SobolDims offset 0xffffffff size 0x4
  static constexpr uint32_t SobolDims{ static_cast<uint32_t>(0x400u) };

  /// @brief Field SobolSize offset 0xffffffff size 0x4
  static constexpr uint32_t SobolSize{ static_cast<uint32_t>(0x34u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Sampling::SobolData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Sampling
