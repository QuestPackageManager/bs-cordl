#pragma once
// IWYU pragma private; include "TMPro/TMP_MaterialManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_MaterialManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_MaterialManager_FallbackMaterial;
}
namespace TMPro {
class TMP_MaterialManager_MaskingMaterial;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass11_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass12_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass13_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass9_0;
}
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace TMPro {
class TMP_MaterialManager;
}
namespace TMPro {
class TMP_MaterialManager_FallbackMaterial;
}
namespace TMPro {
class TMP_MaterialManager_MaskingMaterial;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass11_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass12_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass13_0;
}
namespace TMPro {
class TMP_MaterialManager___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager_FallbackMaterial);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager_MaskingMaterial);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager___c__DisplayClass11_0);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager___c__DisplayClass12_0);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager___c__DisplayClass13_0);
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager___c__DisplayClass9_0);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/FallbackMaterial
class CORDL_TYPE TMP_MaterialManager_FallbackMaterial : public ::System::Object {
public:
  // Declarations
  /// @brief Field count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field fallbackID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackID, put = __cordl_internal_set_fallbackID)) int64_t fallbackID;

  /// @brief Field fallbackMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackMaterial, put = __cordl_internal_set_fallbackMaterial)) ::UnityW<::UnityEngine::Material> fallbackMaterial;

  /// @brief Field sourceMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceMaterial, put = __cordl_internal_set_sourceMaterial)) ::UnityW<::UnityEngine::Material> sourceMaterial;

  /// @brief Field sourceMaterialCRC, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceMaterialCRC, put = __cordl_internal_set_sourceMaterialCRC)) int32_t sourceMaterialCRC;

  static inline ::TMPro::TMP_MaterialManager_FallbackMaterial* New_ctor();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int64_t const& __cordl_internal_get_fallbackID() const;

  constexpr int64_t& __cordl_internal_get_fallbackID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_fallbackMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_fallbackMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sourceMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sourceMaterial();

  constexpr int32_t const& __cordl_internal_get_sourceMaterialCRC() const;

  constexpr int32_t& __cordl_internal_get_sourceMaterialCRC();

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_fallbackID(int64_t value);

  constexpr void __cordl_internal_set_fallbackMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceMaterialCRC(int32_t value);

  /// @brief Method .ctor, addr 0x4808050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager_FallbackMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager_FallbackMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager_FallbackMaterial(TMP_MaterialManager_FallbackMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager_FallbackMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager_FallbackMaterial(TMP_MaterialManager_FallbackMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14519 };

  /// @brief Field fallbackID, offset: 0x10, size: 0x8, def value: None
  int64_t ___fallbackID;

  /// @brief Field sourceMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___sourceMaterial;

  /// @brief Field sourceMaterialCRC, offset: 0x20, size: 0x4, def value: None
  int32_t ___sourceMaterialCRC;

  /// @brief Field fallbackMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___fallbackMaterial;

  /// @brief Field count, offset: 0x30, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager_FallbackMaterial, ___fallbackID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_FallbackMaterial, ___sourceMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_FallbackMaterial, ___sourceMaterialCRC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_FallbackMaterial, ___fallbackMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_FallbackMaterial, ___count) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager_FallbackMaterial, 0x38>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/MaskingMaterial
class CORDL_TYPE TMP_MaterialManager_MaskingMaterial : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMaterial, put = __cordl_internal_set_baseMaterial)) ::UnityW<::UnityEngine::Material> baseMaterial;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field stencilID, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilID, put = __cordl_internal_set_stencilID)) int32_t stencilID;

  /// @brief Field stencilMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial)) ::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::TMP_MaterialManager_MaskingMaterial* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMaterial();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_stencilID() const;

  constexpr int32_t& __cordl_internal_get_stencilID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_stencilID(int32_t value);

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x4806660, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager_MaskingMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager_MaskingMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager_MaskingMaterial(TMP_MaterialManager_MaskingMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager_MaskingMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager_MaskingMaterial(TMP_MaterialManager_MaskingMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14520 };

  /// @brief Field baseMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___baseMaterial;

  /// @brief Field stencilMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field stencilID, offset: 0x24, size: 0x4, def value: None
  int32_t ___stencilID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager_MaskingMaterial, ___baseMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_MaskingMaterial, ___stencilMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_MaskingMaterial, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_MaterialManager_MaskingMaterial, ___stencilID) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager_MaskingMaterial, 0x28>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/<>c__DisplayClass11_0
class CORDL_TYPE TMP_MaterialManager___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial)) ::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::TMP_MaterialManager___c__DisplayClass11_0* New_ctor();

  /// @brief Method <AddMaskingMaterial>b__0, addr 0x4808980, size 0x70, virtual false, abstract: false, final false
  inline bool _AddMaskingMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x4806ce8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager___c__DisplayClass11_0(TMP_MaterialManager___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager___c__DisplayClass11_0(TMP_MaterialManager___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14521 };

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager___c__DisplayClass11_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/<>c__DisplayClass12_0
class CORDL_TYPE TMP_MaterialManager___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial)) ::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::TMP_MaterialManager___c__DisplayClass12_0* New_ctor();

  /// @brief Method <RemoveStencilMaterial>b__0, addr 0x48089f0, size 0x70, virtual false, abstract: false, final false
  inline bool _RemoveStencilMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x4806e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager___c__DisplayClass12_0(TMP_MaterialManager___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager___c__DisplayClass12_0(TMP_MaterialManager___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14522 };

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager___c__DisplayClass12_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/<>c__DisplayClass13_0
class CORDL_TYPE TMP_MaterialManager___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMaterial, put = __cordl_internal_set_baseMaterial)) ::UnityW<::UnityEngine::Material> baseMaterial;

  static inline ::TMPro::TMP_MaterialManager___c__DisplayClass13_0* New_ctor();

  /// @brief Method <ReleaseBaseMaterial>b__0, addr 0x4808a60, size 0x70, virtual false, abstract: false, final false
  inline bool _ReleaseBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMaterial();

  constexpr void __cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x48072e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager___c__DisplayClass13_0(TMP_MaterialManager___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager___c__DisplayClass13_0(TMP_MaterialManager___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14523 };

  /// @brief Field baseMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___baseMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager___c__DisplayClass13_0, ___baseMaterial) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager/<>c__DisplayClass9_0
class CORDL_TYPE TMP_MaterialManager___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial)) ::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::TMP_MaterialManager___c__DisplayClass9_0* New_ctor();

  /// @brief Method <GetBaseMaterial>b__0, addr 0x4808ad0, size 0x70, virtual false, abstract: false, final false
  inline bool _GetBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x48069b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager___c__DisplayClass9_0(TMP_MaterialManager___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager___c__DisplayClass9_0(TMP_MaterialManager___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14524 };

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_MaterialManager___c__DisplayClass9_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_MaterialManager
class CORDL_TYPE TMP_MaterialManager : public ::System::Object {
public:
  // Declarations
  using FallbackMaterial = ::TMPro::TMP_MaterialManager_FallbackMaterial;

  using MaskingMaterial = ::TMPro::TMP_MaterialManager_MaskingMaterial;

  using __c__DisplayClass11_0 = ::TMPro::TMP_MaterialManager___c__DisplayClass11_0;

  using __c__DisplayClass12_0 = ::TMPro::TMP_MaterialManager___c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::TMPro::TMP_MaterialManager___c__DisplayClass13_0;

  using __c__DisplayClass9_0 = ::TMPro::TMP_MaterialManager___c__DisplayClass9_0;

  /// @brief Field isFallbackListDirty, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isFallbackListDirty, put = setStaticF_isFallbackListDirty)) bool isFallbackListDirty;

  /// @brief Field m_fallbackCleanupList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_fallbackCleanupList,
                      put = setStaticF_m_fallbackCleanupList)) ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>* m_fallbackCleanupList;

  /// @brief Field m_fallbackMaterialLookup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_fallbackMaterialLookup, put = setStaticF_m_fallbackMaterialLookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* m_fallbackMaterialLookup;

  /// @brief Field m_fallbackMaterials, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_fallbackMaterials,
                      put = setStaticF_m_fallbackMaterials)) ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>* m_fallbackMaterials;

  /// @brief Field m_materialList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_materialList, put = setStaticF_m_materialList)) ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>* m_materialList;

  /// @brief Method AddFallbackMaterialReference, addr 0x480847c, size 0x144, virtual false, abstract: false, final false
  static inline void AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial);

  /// @brief Method AddMaskingMaterial, addr 0x4806a7c, size 0x26c, virtual false, abstract: false, final false
  static inline void AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, int32_t stencilID);

  /// @brief Method CleanupFallbackMaterials, addr 0x48055e0, size 0x214, virtual false, abstract: false, final false
  static inline void CleanupFallbackMaterials();

  /// @brief Method ClearMaterials, addr 0x48072f0, size 0x1bc, virtual false, abstract: false, final false
  static inline void ClearMaterials();

  /// @brief Method CopyMaterialPresetProperties, addr 0x4807de4, size 0x26c, virtual false, abstract: false, final false
  static inline void CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination);

  /// @brief Method FindRootSortOverrideCanvas, addr 0x4807778, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRootSortOverrideCanvas(::UnityEngine::Transform* start);

  /// @brief Method GetBaseMaterial, addr 0x4806858, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBaseMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method GetFallbackMaterial, addr 0x4807b14, size 0x2d0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int32_t atlasIndex);

  /// @brief Method GetFallbackMaterial, addr 0x4808058, size 0x424, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial);

  /// @brief Method GetMaterialForRendering, addr 0x4807918, size 0x1fc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial);

  /// @brief Method GetStencilID, addr 0x48074ac, size 0x2cc, virtual false, abstract: false, final false
  static inline int32_t GetStencilID(::UnityEngine::GameObject* obj);

  /// @brief Method GetStencilMaterial, addr 0x48057f4, size 0x3a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetStencilMaterial(::UnityEngine::Material* baseMaterial, int32_t stencilID);

  /// @brief Method OnPreRender, addr 0x4805568, size 0x78, virtual false, abstract: false, final false
  static inline void OnPreRender();

  /// @brief Method ReleaseBaseMaterial, addr 0x4806e54, size 0x494, virtual false, abstract: false, final false
  static inline void ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method ReleaseFallbackMaterial, addr 0x4808790, size 0x1f0, virtual false, abstract: false, final false
  static inline void ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial);

  /// @brief Method ReleaseStencilMaterial, addr 0x4806668, size 0x1f0, virtual false, abstract: false, final false
  static inline void ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method RemoveFallbackMaterialReference, addr 0x48085c0, size 0x1d0, virtual false, abstract: false, final false
  static inline void RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial);

  /// @brief Method RemoveStencilMaterial, addr 0x4806cf0, size 0x15c, virtual false, abstract: false, final false
  static inline void RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method SetStencil, addr 0x48069c0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> SetStencil(::UnityEngine::Material* material, int32_t stencilID);

  static inline bool getStaticF_isFallbackListDirty();

  static inline ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>* getStaticF_m_fallbackCleanupList();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* getStaticF_m_fallbackMaterialLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>* getStaticF_m_fallbackMaterials();

  static inline ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>* getStaticF_m_materialList();

  static inline void setStaticF_isFallbackListDirty(bool value);

  static inline void setStaticF_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>* value);

  static inline void setStaticF_m_fallbackMaterialLookup(::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* value);

  static inline void setStaticF_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>* value);

  static inline void setStaticF_m_materialList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_MaterialManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_MaterialManager(TMP_MaterialManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_MaterialManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_MaterialManager(TMP_MaterialManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager*, "TMPro", "TMP_MaterialManager");
NEED_NO_BOX(::TMPro::TMP_MaterialManager_FallbackMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager_FallbackMaterial*, "TMPro", "TMP_MaterialManager/FallbackMaterial");
NEED_NO_BOX(::TMPro::TMP_MaterialManager_MaskingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager_MaskingMaterial*, "TMPro", "TMP_MaterialManager/MaskingMaterial");
NEED_NO_BOX(::TMPro::TMP_MaterialManager___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager___c__DisplayClass11_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass11_0");
NEED_NO_BOX(::TMPro::TMP_MaterialManager___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager___c__DisplayClass12_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass12_0");
NEED_NO_BOX(::TMPro::TMP_MaterialManager___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager___c__DisplayClass13_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass13_0");
NEED_NO_BOX(::TMPro::TMP_MaterialManager___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager___c__DisplayClass9_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass9_0");
