#pragma once
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
class __TMP_MaterialManager__FallbackMaterial;
}
namespace TMPro {
class __TMP_MaterialManager__MaskingMaterial;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass11_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass12_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass13_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass9_0;
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
class __TMP_MaterialManager__FallbackMaterial;
}
namespace TMPro {
class __TMP_MaterialManager__MaskingMaterial;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass11_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass12_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass13_0;
}
namespace TMPro {
class __TMP_MaterialManager____c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_MaterialManager);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager__FallbackMaterial);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager__MaskingMaterial);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0);
MARK_REF_PTR_T(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0);
// Type: ::FallbackMaterial
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::FallbackMaterial*
class CORDL_TYPE __TMP_MaterialManager__FallbackMaterial : public ::System::Object {
public:
  // Declarations
  /// @brief Field count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field fallbackID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackID, put = __cordl_internal_set_fallbackID)) int64_t fallbackID;

  /// @brief Field fallbackMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackMaterial, put = __cordl_internal_set_fallbackMaterial))::UnityW<::UnityEngine::Material> fallbackMaterial;

  /// @brief Field sourceMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceMaterial, put = __cordl_internal_set_sourceMaterial))::UnityW<::UnityEngine::Material> sourceMaterial;

  /// @brief Field sourceMaterialCRC, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sourceMaterialCRC, put = __cordl_internal_set_sourceMaterialCRC)) int32_t sourceMaterialCRC;

  static inline ::TMPro::__TMP_MaterialManager__FallbackMaterial* New_ctor();

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

  /// @brief Method .ctor, addr 0x337180c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager__FallbackMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__FallbackMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager__FallbackMaterial(__TMP_MaterialManager__FallbackMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__FallbackMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager__FallbackMaterial(__TMP_MaterialManager__FallbackMaterial const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager__FallbackMaterial, 0x38>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__FallbackMaterial, ___fallbackID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__FallbackMaterial, ___sourceMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__FallbackMaterial, ___sourceMaterialCRC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__FallbackMaterial, ___fallbackMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__FallbackMaterial, ___count) == 0x30, "Offset mismatch!");

} // namespace TMPro
// Type: ::MaskingMaterial
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::MaskingMaterial*
class CORDL_TYPE __TMP_MaterialManager__MaskingMaterial : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMaterial, put = __cordl_internal_set_baseMaterial))::UnityW<::UnityEngine::Material> baseMaterial;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field stencilID, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilID, put = __cordl_internal_set_stencilID)) int32_t stencilID;

  /// @brief Field stencilMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial))::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::__TMP_MaterialManager__MaskingMaterial* New_ctor();

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

  /// @brief Method .ctor, addr 0x336fd68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager__MaskingMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__MaskingMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager__MaskingMaterial(__TMP_MaterialManager__MaskingMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager__MaskingMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager__MaskingMaterial(__TMP_MaterialManager__MaskingMaterial const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager__MaskingMaterial, 0x28>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__MaskingMaterial, ___baseMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__MaskingMaterial, ___stencilMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__MaskingMaterial, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager__MaskingMaterial, ___stencilID) == 0x24, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass9_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial))::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0* New_ctor();

  /// @brief Method <GetBaseMaterial>b__0, addr 0x3372140, size 0x70, virtual false, abstract: false, final false
  inline bool _GetBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x33700d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager____c__DisplayClass9_0(__TMP_MaterialManager____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager____c__DisplayClass9_0(__TMP_MaterialManager____c__DisplayClass9_0 const&) = delete;

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass11_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial))::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0* New_ctor();

  /// @brief Method <AddMaskingMaterial>b__0, addr 0x33721b0, size 0x70, virtual false, abstract: false, final false
  inline bool _AddMaskingMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x3370408, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager____c__DisplayClass11_0(__TMP_MaterialManager____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager____c__DisplayClass11_0(__TMP_MaterialManager____c__DisplayClass11_0 const&) = delete;

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass12_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field stencilMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilMaterial, put = __cordl_internal_set_stencilMaterial))::UnityW<::UnityEngine::Material> stencilMaterial;

  static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0* New_ctor();

  /// @brief Method <RemoveStencilMaterial>b__0, addr 0x3372220, size 0x70, virtual false, abstract: false, final false
  inline bool _RemoveStencilMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stencilMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stencilMaterial();

  constexpr void __cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x3370570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager____c__DisplayClass12_0(__TMP_MaterialManager____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager____c__DisplayClass12_0(__TMP_MaterialManager____c__DisplayClass12_0 const&) = delete;

  /// @brief Field stencilMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stencilMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0, ___stencilMaterial) == 0x10, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMP_MaterialManager::<>c__DisplayClass13_0*
class CORDL_TYPE __TMP_MaterialManager____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMaterial, put = __cordl_internal_set_baseMaterial))::UnityW<::UnityEngine::Material> baseMaterial;

  static inline ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0* New_ctor();

  /// @brief Method <ReleaseBaseMaterial>b__0, addr 0x3372290, size 0x70, virtual false, abstract: false, final false
  inline bool _ReleaseBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseMaterial();

  constexpr void __cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x3370aa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_MaterialManager____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_MaterialManager____c__DisplayClass13_0(__TMP_MaterialManager____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_MaterialManager____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_MaterialManager____c__DisplayClass13_0(__TMP_MaterialManager____c__DisplayClass13_0 const&) = delete;

  /// @brief Field baseMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___baseMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0, ___baseMaterial) == 0x10, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_MaterialManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_MaterialManager*
class CORDL_TYPE TMP_MaterialManager : public ::System::Object {
public:
  // Declarations
  using FallbackMaterial = ::TMPro::__TMP_MaterialManager__FallbackMaterial;

  using MaskingMaterial = ::TMPro::__TMP_MaterialManager__MaskingMaterial;

  using __c__DisplayClass11_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0;

  using __c__DisplayClass12_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0;

  using __c__DisplayClass9_0 = ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0;

  /// @brief Field isFallbackListDirty, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isFallbackListDirty, put = setStaticF_isFallbackListDirty)) bool isFallbackListDirty;

  /// @brief Field m_fallbackCleanupList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_fallbackCleanupList,
                             put = setStaticF_m_fallbackCleanupList))::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* m_fallbackCleanupList;

  /// @brief Field m_fallbackMaterialLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_fallbackMaterialLookup,
                             put = setStaticF_m_fallbackMaterialLookup))::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* m_fallbackMaterialLookup;

  /// @brief Field m_fallbackMaterials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_fallbackMaterials,
                             put = setStaticF_m_fallbackMaterials))::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>* m_fallbackMaterials;

  /// @brief Field m_materialList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_materialList, put = setStaticF_m_materialList))::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* m_materialList;

  /// @brief Method AddFallbackMaterialReference, addr 0x3371c34, size 0x144, virtual false, abstract: false, final false
  static inline void AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial);

  /// @brief Method AddMaskingMaterial, addr 0x3370194, size 0x274, virtual false, abstract: false, final false
  static inline void AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, int32_t stencilID);

  /// @brief Method CleanupFallbackMaterials, addr 0x336ecb4, size 0x214, virtual false, abstract: false, final false
  static inline void CleanupFallbackMaterials();

  /// @brief Method ClearMaterials, addr 0x3370aac, size 0x1bc, virtual false, abstract: false, final false
  static inline void ClearMaterials();

  /// @brief Method CopyMaterialPresetProperties, addr 0x33715a0, size 0x26c, virtual false, abstract: false, final false
  static inline void CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination);

  /// @brief Method FindRootSortOverrideCanvas, addr 0x3370f34, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindRootSortOverrideCanvas(::UnityEngine::Transform* start);

  /// @brief Method GetBaseMaterial, addr 0x336ff6c, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBaseMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method GetFallbackMaterial, addr 0x33712d0, size 0x2d0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int32_t atlasIndex);

  /// @brief Method GetFallbackMaterial, addr 0x3371814, size 0x420, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial);

  /// @brief Method GetMaterialForRendering, addr 0x33710d4, size 0x1fc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial);

  /// @brief Method GetStencilID, addr 0x3370c68, size 0x2cc, virtual false, abstract: false, final false
  static inline int32_t GetStencilID(::UnityEngine::GameObject* obj);

  /// @brief Method GetStencilMaterial, addr 0x336eec8, size 0x3b4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetStencilMaterial(::UnityEngine::Material* baseMaterial, int32_t stencilID);

  /// @brief Method OnPreRender, addr 0x336ec3c, size 0x78, virtual false, abstract: false, final false
  static inline void OnPreRender();

  /// @brief Method ReleaseBaseMaterial, addr 0x3370578, size 0x52c, virtual false, abstract: false, final false
  static inline void ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial);

  /// @brief Method ReleaseFallbackMaterial, addr 0x3371f4c, size 0x1f4, virtual false, abstract: false, final false
  static inline void ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial);

  /// @brief Method ReleaseStencilMaterial, addr 0x336fd70, size 0x1fc, virtual false, abstract: false, final false
  static inline void ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method RemoveFallbackMaterialReference, addr 0x3371d78, size 0x1d4, virtual false, abstract: false, final false
  static inline void RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial);

  /// @brief Method RemoveStencilMaterial, addr 0x3370410, size 0x160, virtual false, abstract: false, final false
  static inline void RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial);

  /// @brief Method SetStencil, addr 0x33700d8, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> SetStencil(::UnityEngine::Material* material, int32_t stencilID);

  static inline bool getStaticF_isFallbackListDirty();

  static inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* getStaticF_m_fallbackCleanupList();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* getStaticF_m_fallbackMaterialLookup();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>* getStaticF_m_fallbackMaterials();

  static inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* getStaticF_m_materialList();

  static inline void setStaticF_isFallbackListDirty(bool value);

  static inline void setStaticF_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* value);

  static inline void setStaticF_m_fallbackMaterialLookup(::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* value);

  static inline void setStaticF_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>* value);

  static inline void setStaticF_m_materialList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_MaterialManager, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager*, "TMPro", "TMP_MaterialManager");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager__FallbackMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager__FallbackMaterial*, "TMPro", "TMP_MaterialManager/FallbackMaterial");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager__MaskingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager__MaskingMaterial*, "TMPro", "TMP_MaterialManager/MaskingMaterial");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass11_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass12_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass13_0");
NEED_NO_BOX(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass9_0");
