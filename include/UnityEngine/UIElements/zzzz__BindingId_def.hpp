#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingId)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPath;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingId);
// Dependencies Unity.Properties.PropertyPath
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingId
struct CORDL_TYPE BindingId {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::UIElements::BindingId Invalid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BindingId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BindingId>*();

  /// @brief Method Equals, addr 0x6afe91c, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6afe8cc, size 0x50, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BindingId other);

  /// @brief Method GetHashCode, addr 0x6afe9e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6afe8c4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6afe798, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPath> path);

  /// @brief Method .ctor, addr 0x6afe70c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_Invalid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BindingId>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BindingId>* i___System__IEquatable_1___UnityEngine__UIElements__BindingId_();

  /// @brief Method op_Equality, addr 0x6afe9e8, size 0x50, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::UnityEngine::UIElements::BindingId> lhs, ::ByRef<::UnityEngine::UIElements::BindingId> rhs);

  /// @brief Method op_Implicit, addr 0x6afe7dc, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::ByRef<::UnityEngine::UIElements::BindingId> vep);

  /// @brief Method op_Implicit, addr 0x6afe7e4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BindingId op_Implicit___UnityEngine__UIElements__BindingId(::StringW name);

  /// @brief Method op_Implicit, addr 0x6afe86c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BindingId op_Implicit___UnityEngine__UIElements__BindingId(::ByRef<::Unity::Properties::PropertyPath> path);

  /// @brief Method op_Implicit, addr 0x6afe7cc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath op_Implicit___Unity__Properties__PropertyPath(::ByRef<::UnityEngine::UIElements::BindingId> vep);

  /// @brief Method op_Inequality, addr 0x6afea38, size 0x9c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::UnityEngine::UIElements::BindingId> lhs, ::ByRef<::UnityEngine::UIElements::BindingId> rhs);

  static inline void setStaticF_Invalid(::UnityEngine::UIElements::BindingId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingId();

  // Ctor Parameters [CppParam { name: "m_PropertyPath", ty: "::Unity::Properties::PropertyPath", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "::StringW", modifiers: "",
  // def_value: None }]
  constexpr BindingId(::Unity::Properties::PropertyPath m_PropertyPath, ::StringW m_Path) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field m_PropertyPath, offset: 0x0, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath m_PropertyPath;

  /// @brief Field m_Path, offset: 0x90, size: 0x8, def value: None
  ::StringW m_Path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingId, m_PropertyPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingId, m_Path) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingId, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingId, "UnityEngine.UIElements", "BindingId");
