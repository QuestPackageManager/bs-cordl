#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PathRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
CORDL_MODULE_EXPORT(PathRef)
namespace Unity::Properties {
struct PropertyPath;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PathRef;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PathRef*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PathRef*, "UnityEngine.UIElements", "PathRef");
// Dependencies System.Object, Unity.Properties.PropertyPath
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PathRef
class CORDL_TYPE PathRef : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Field m_Path, offset 0x10, size 0x90
  __declspec(property(get = __cordl_internal_get_m_Path, put = __cordl_internal_set_m_Path)) ::Unity::Properties::PropertyPath m_Path;

  __declspec(property(get = get_path)) ::Unity::Properties::PropertyPath path;

  static inline ::UnityEngine::UIElements::PathRef* New_ctor();

  constexpr ::Unity::Properties::PropertyPath const& __cordl_internal_get_m_Path() const;

  constexpr ::Unity::Properties::PropertyPath& __cordl_internal_get_m_Path();

  constexpr void __cordl_internal_set_m_Path(::Unity::Properties::PropertyPath value);

  /// @brief Method .ctor, addr 0x7154c10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEmpty, addr 0x7154c00, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_path, addr 0x7154bf8, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Properties::PropertyPath> get_path();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathRef", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathRef(PathRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathRef", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathRef(PathRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5331 };

  /// @brief Field m_Path, offset: 0x10, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath ___m_Path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PathRef, ___m_Path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PathRef) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::UIElements
