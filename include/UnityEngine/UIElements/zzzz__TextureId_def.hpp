#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureId)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextureId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextureId);
// Type: UnityEngine.UIElements::TextureId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7425))
// CS Name: ::UnityEngine.UIElements::TextureId
struct CORDL_TYPE TextureId {
public:
  // Declarations
  /// @brief Field invalid, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_invalid, put = setStaticF_invalid))::UnityEngine::UIElements::TextureId invalid;

  __declspec(property(get = get_index)) int32_t index;

  static inline void setStaticF_invalid(::UnityEngine::UIElements::TextureId value);

  static inline ::UnityEngine::UIElements::TextureId getStaticF_invalid();

  /// @brief Method .ctor addr 0x2d14008 size 0xc virtual false final false
  inline void _ctor(int32_t index);

  /// @brief Method get_index addr 0x2d14014 size 0xc virtual false final false
  inline int32_t get_index();

  /// @brief Method ConvertToGpu addr 0x2d14020 size 0x10 virtual false final false
  inline float_t ConvertToGpu();

  /// @brief Method Equals addr 0x2d14030 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d140d8 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2d140f8 size 0xc virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right);

  /// @brief Method op_Inequality addr 0x2d14104 size 0x64 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextureId left, ::UnityEngine::UIElements::TextureId right);

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureId(int32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureId();

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextureId, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureId, m_Index) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextureId, "UnityEngine.UIElements", "TextureId");
