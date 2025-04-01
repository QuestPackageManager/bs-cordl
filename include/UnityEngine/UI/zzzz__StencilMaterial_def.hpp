#pragma once
// IWYU pragma private; include "UnityEngine/UI/StencilMaterial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StencilMaterial)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace UnityEngine::UI {
class StencilMaterial_MatEntry;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
class StencilMaterial;
}
namespace UnityEngine::UI {
class StencilMaterial_MatEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::StencilMaterial);
MARK_REF_PTR_T(::UnityEngine::UI::StencilMaterial_MatEntry);
// Dependencies System.Object, UnityEngine.Rendering.ColorWriteMask, UnityEngine.Rendering.CompareFunction, UnityEngine.Rendering.StencilOp
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.StencilMaterial/MatEntry
class CORDL_TYPE StencilMaterial_MatEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMat, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMat, put = __cordl_internal_set_baseMat)) ::UnityW<::UnityEngine::Material> baseMat;

  /// @brief Field colorMask, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMask, put = __cordl_internal_set_colorMask)) ::UnityEngine::Rendering::ColorWriteMask colorMask;

  /// @brief Field compareFunction, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_compareFunction, put = __cordl_internal_set_compareFunction)) ::UnityEngine::Rendering::CompareFunction compareFunction;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field customMat, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_customMat, put = __cordl_internal_set_customMat)) ::UnityW<::UnityEngine::Material> customMat;

  /// @brief Field operation, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_operation, put = __cordl_internal_set_operation)) ::UnityEngine::Rendering::StencilOp operation;

  /// @brief Field readMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_readMask, put = __cordl_internal_set_readMask)) int32_t readMask;

  /// @brief Field stencilId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilId, put = __cordl_internal_set_stencilId)) int32_t stencilId;

  /// @brief Field useAlphaClip, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_useAlphaClip, put = __cordl_internal_set_useAlphaClip)) bool useAlphaClip;

  /// @brief Field writeMask, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_writeMask, put = __cordl_internal_set_writeMask)) int32_t writeMask;

  static inline ::UnityEngine::UI::StencilMaterial_MatEntry* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMat();

  constexpr ::UnityEngine::Rendering::ColorWriteMask const& __cordl_internal_get_colorMask() const;

  constexpr ::UnityEngine::Rendering::ColorWriteMask& __cordl_internal_get_colorMask();

  constexpr ::UnityEngine::Rendering::CompareFunction const& __cordl_internal_get_compareFunction() const;

  constexpr ::UnityEngine::Rendering::CompareFunction& __cordl_internal_get_compareFunction();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_customMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_customMat();

  constexpr ::UnityEngine::Rendering::StencilOp const& __cordl_internal_get_operation() const;

  constexpr ::UnityEngine::Rendering::StencilOp& __cordl_internal_get_operation();

  constexpr int32_t const& __cordl_internal_get_readMask() const;

  constexpr int32_t& __cordl_internal_get_readMask();

  constexpr int32_t const& __cordl_internal_get_stencilId() const;

  constexpr int32_t& __cordl_internal_get_stencilId();

  constexpr bool const& __cordl_internal_get_useAlphaClip() const;

  constexpr bool& __cordl_internal_get_useAlphaClip();

  constexpr int32_t const& __cordl_internal_get_writeMask() const;

  constexpr int32_t& __cordl_internal_get_writeMask();

  constexpr void __cordl_internal_set_baseMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_colorMask(::UnityEngine::Rendering::ColorWriteMask value);

  constexpr void __cordl_internal_set_compareFunction(::UnityEngine::Rendering::CompareFunction value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_customMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_operation(::UnityEngine::Rendering::StencilOp value);

  constexpr void __cordl_internal_set_readMask(int32_t value);

  constexpr void __cordl_internal_set_stencilId(int32_t value);

  constexpr void __cordl_internal_set_useAlphaClip(bool value);

  constexpr void __cordl_internal_set_writeMask(int32_t value);

  /// @brief Method .ctor, addr 0x4ac7140, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilMaterial_MatEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial_MatEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilMaterial_MatEntry(StencilMaterial_MatEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial_MatEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilMaterial_MatEntry(StencilMaterial_MatEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15140 };

  /// @brief Field baseMat, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___baseMat;

  /// @brief Field customMat, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___customMat;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field stencilId, offset: 0x24, size: 0x4, def value: None
  int32_t ___stencilId;

  /// @brief Field operation, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::StencilOp ___operation;

  /// @brief Field compareFunction, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::CompareFunction ___compareFunction;

  /// @brief Field readMask, offset: 0x30, size: 0x4, def value: None
  int32_t ___readMask;

  /// @brief Field writeMask, offset: 0x34, size: 0x4, def value: None
  int32_t ___writeMask;

  /// @brief Field useAlphaClip, offset: 0x38, size: 0x1, def value: None
  bool ___useAlphaClip;

  /// @brief Field colorMask, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ColorWriteMask ___colorMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___baseMat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___customMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___stencilId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___operation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___compareFunction) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___readMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___writeMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___useAlphaClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::StencilMaterial_MatEntry, ___colorMask) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::StencilMaterial_MatEntry, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.StencilMaterial
class CORDL_TYPE StencilMaterial : public ::System::Object {
public:
  // Declarations
  using MatEntry = ::UnityEngine::UI::StencilMaterial_MatEntry;

  /// @brief Field m_List, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_List, put = setStaticF_m_List)) ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>* m_List;

  /// @brief Method Add, addr 0x4ac669c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Add(::UnityEngine::Material* baseMat, int32_t stencilID);

  /// @brief Method Add, addr 0x4ac66a4, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                                      ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);

  /// @brief Method Add, addr 0x4ac6730, size 0x968, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                                      ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask,
                                                      int32_t writeMask);

  /// @brief Method ClearAll, addr 0x4ac7310, size 0x120, virtual false, abstract: false, final false
  static inline void ClearAll();

  /// @brief Method LogWarningWhenNotInBatchmode, addr 0x4ac7098, size 0xa8, virtual false, abstract: false, final false
  static inline void LogWarningWhenNotInBatchmode(::StringW warning, ::UnityEngine::Object* context);

  /// @brief Method Remove, addr 0x4ac7150, size 0x1c0, virtual false, abstract: false, final false
  static inline void Remove(::UnityEngine::Material* customMat);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>* getStaticF_m_List();

  static inline void setStaticF_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilMaterial(StencilMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilMaterial(StencilMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15141 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::StencilMaterial, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::StencilMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::StencilMaterial*, "UnityEngine.UI", "StencilMaterial");
NEED_NO_BOX(::UnityEngine::UI::StencilMaterial_MatEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::StencilMaterial_MatEntry*, "UnityEngine.UI", "StencilMaterial/MatEntry");
