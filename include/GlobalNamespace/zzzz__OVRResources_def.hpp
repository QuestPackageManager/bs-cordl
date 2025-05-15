#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRResources)
namespace GlobalNamespace {
class OVRResources___c__DisplayClass2_0;
}
namespace GlobalNamespace {
template <typename T> class OVRResources___c__DisplayClass3_0_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRResources;
}
namespace GlobalNamespace {
class OVRResources___c__DisplayClass2_0;
}
namespace GlobalNamespace {
template <typename T> class OVRResources___c__DisplayClass3_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRResources);
MARK_REF_PTR_T(::GlobalNamespace::OVRResources___c__DisplayClass2_0);
MARK_GEN_REF_PTR_T(::GlobalNamespace::OVRResources___c__DisplayClass3_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRResources/<>c__DisplayClass2_0
class CORDL_TYPE OVRResources___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  static inline ::GlobalNamespace::OVRResources___c__DisplayClass2_0* New_ctor();

  /// @brief Method <Load>b__0, addr 0x4006fc0, size 0x34, virtual false, abstract: false, final false
  inline bool _Load_b__0(::StringW s);

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x4006edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResources___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResources___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResources___c__DisplayClass2_0(OVRResources___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResources___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResources___c__DisplayClass2_0(OVRResources___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8267 };

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRResources___c__DisplayClass2_0, ___path) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResources___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OVRResources/<>c__DisplayClass3_0`1<T>
class CORDL_TYPE OVRResources___c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  static inline ::GlobalNamespace::OVRResources___c__DisplayClass3_0_1<T>* New_ctor();

  /// @brief Method <Load>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _Load_b__0(::StringW s);

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResources___c__DisplayClass3_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResources___c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResources___c__DisplayClass3_0_1(OVRResources___c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResources___c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResources___c__DisplayClass3_0_1(OVRResources___c__DisplayClass3_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8268 };

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRResources
class CORDL_TYPE OVRResources : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::OVRResources___c__DisplayClass2_0;

  template <typename T> using __c__DisplayClass3_0_1 = ::GlobalNamespace::OVRResources___c__DisplayClass3_0_1<T>;

  /// @brief Field assetNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_assetNames, put = setStaticF_assetNames)) ::System::Collections::Generic::List_1<::StringW>* assetNames;

  /// @brief Field resourceBundle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_resourceBundle, put = setStaticF_resourceBundle)) ::UnityW<::UnityEngine::AssetBundle> resourceBundle;

  /// @brief Method Load, addr 0x4006cfc, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Load(::StringW path);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Load(::StringW path);

  static inline ::GlobalNamespace::OVRResources* New_ctor();

  /// @brief Method SetResourceBundle, addr 0x4006ee4, size 0xd4, virtual false, abstract: false, final false
  static inline void SetResourceBundle(::UnityEngine::AssetBundle* bundle);

  /// @brief Method .ctor, addr 0x4006fb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_assetNames();

  static inline ::UnityW<::UnityEngine::AssetBundle> getStaticF_resourceBundle();

  static inline void setStaticF_assetNames(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_resourceBundle(::UnityW<::UnityEngine::AssetBundle> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResources(OVRResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResources(OVRResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResources, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResources);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResources*, "", "OVRResources");
NEED_NO_BOX(::GlobalNamespace::OVRResources___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResources___c__DisplayClass2_0*, "", "OVRResources/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRResources___c__DisplayClass3_0_1, "", "OVRResources/<>c__DisplayClass3_0`1");
