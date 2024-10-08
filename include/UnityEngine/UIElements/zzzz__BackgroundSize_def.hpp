#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundSizeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundSize)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundSizeType;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BackgroundSize);
// Type: UnityEngine.UIElements::BackgroundSize
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::BackgroundSize
struct CORDL_TYPE BackgroundSize {
public:
  // Declarations
  __declspec(property(get = get_sizeType, put = set_sizeType)) ::UnityEngine::UIElements::BackgroundSizeType sizeType;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::UIElements::Length y;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>*();

  /// @brief Method Equals, addr 0x48f5870, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48f5900, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundSize other);

  /// @brief Method GetHashCode, addr 0x48f595c, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x48f5820, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundSize Initial();

  /// @brief Method ToString, addr 0x48f5a00, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x48f5188, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundSizeType sizeType);

  /// @brief Method .ctor, addr 0x48f51dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length sizeX, ::UnityEngine::UIElements::Length sizeY);

  /// @brief Method get_sizeType, addr 0x48f579c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundSizeType get_sizeType();

  /// @brief Method get_x, addr 0x48f57f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x48f580c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundSize>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundSize_();

  /// @brief Method op_Equality, addr 0x48f55ac, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundSize style1, ::UnityEngine::UIElements::BackgroundSize style2);

  /// @brief Method op_Inequality, addr 0x48f59b8, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundSize style1, ::UnityEngine::UIElements::BackgroundSize style2);

  /// @brief Method set_sizeType, addr 0x48f57a4, size 0x54, virtual false, abstract: false, final false
  inline void set_sizeType(::UnityEngine::UIElements::BackgroundSizeType value);

  /// @brief Method set_x, addr 0x48f5800, size 0xc, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::UIElements::Length value);

  /// @brief Method set_y, addr 0x48f5814, size 0xc, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::UIElements::Length value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundSize();

  // Ctor Parameters [CppParam { name: "m_SizeType", ty: "::UnityEngine::UIElements::BackgroundSizeType", modifiers: "", def_value: None }, CppParam { name: "m_X", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
  constexpr BackgroundSize(::UnityEngine::UIElements::BackgroundSizeType m_SizeType, ::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y) noexcept;

  /// @brief Field m_SizeType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BackgroundSizeType m_SizeType;

  /// @brief Field m_X, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5423 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundSize, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_SizeType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_X) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundSize, m_Y) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundSize, "UnityEngine.UIElements", "BackgroundSize");
