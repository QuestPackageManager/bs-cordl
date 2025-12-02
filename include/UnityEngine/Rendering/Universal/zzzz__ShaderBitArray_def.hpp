#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderBitArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderBitArray)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShaderBitArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShaderBitArray);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ShaderBitArray
struct CORDL_TYPE ShaderBitArray {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_bitCapacity)) int32_t bitCapacity;

  __declspec(property(get = get_data)) ::ArrayW<float_t, ::Array<float_t>*> data;

  __declspec(property(get = get_elemLength)) int32_t elemLength;

  /// @brief Method Clear, addr 0x669a680, size 0x48, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetElementIndexAndBitOffset, addr 0x669a6c8, size 0x14, virtual false, abstract: false, final false
  inline void GetElementIndexAndBitOffset(int32_t index, ::ByRef<int32_t> elemIndex, ::ByRef<int32_t> bitOffset);

  /// @brief Method Resize, addr 0x669a550, size 0x130, virtual false, abstract: false, final false
  inline void Resize(int32_t bitCount);

  /// @brief Method ToString, addr 0x669a748, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Item, addr 0x669a6dc, size 0x2c, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_bitCapacity, addr 0x669a52c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_bitCapacity();

  /// @brief Method get_data, addr 0x669a548, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_data();

  /// @brief Method get_elemLength, addr 0x669a514, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_elemLength();

  /// @brief Method set_Item, addr 0x669a708, size 0x40, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderBitArray();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
  constexpr ShaderBitArray(::ArrayW<float_t, ::Array<float_t>*> m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_BitsPerElement offset 0xffffffff size 0x4
  static constexpr int32_t k_BitsPerElement{ static_cast<int32_t>(0x20) };

  /// @brief Field k_ElementMask offset 0xffffffff size 0x4
  static constexpr int32_t k_ElementMask{ static_cast<int32_t>(0x1f) };

  /// @brief Field k_ElementShift offset 0xffffffff size 0x4
  static constexpr int32_t k_ElementShift{ static_cast<int32_t>(0x5) };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderBitArray, m_Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderBitArray, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderBitArray, "UnityEngine.Rendering.Universal", "ShaderBitArray");
