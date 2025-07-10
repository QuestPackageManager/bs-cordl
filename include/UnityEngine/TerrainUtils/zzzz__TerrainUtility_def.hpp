#pragma once
// IWYU pragma private; include "UnityEngine/TerrainUtils/TerrainUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TerrainUtils {
class TerrainMap;
}
namespace UnityEngine::TerrainUtils {
class TerrainUtility___c__DisplayClass2_0;
}
namespace UnityEngine::TerrainUtils {
class TerrainUtility___c__DisplayClass2_1;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::TerrainUtils {
class TerrainUtility;
}
namespace UnityEngine::TerrainUtils {
class TerrainUtility___c__DisplayClass2_0;
}
namespace UnityEngine::TerrainUtils {
class TerrainUtility___c__DisplayClass2_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainUtility);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0);
MARK_REF_PTR_T(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1);
// Dependencies System.Object
namespace UnityEngine::TerrainUtils {
// Is value type: false
// CS Name: UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0
class CORDL_TYPE TerrainUtility___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onlyAutoConnectedTerrains, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_onlyAutoConnectedTerrains, put = __cordl_internal_set_onlyAutoConnectedTerrains)) bool onlyAutoConnectedTerrains;

  static inline ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* New_ctor();

  constexpr bool const& __cordl_internal_get_onlyAutoConnectedTerrains() const;

  constexpr bool& __cordl_internal_get_onlyAutoConnectedTerrains();

  constexpr void __cordl_internal_set_onlyAutoConnectedTerrains(bool value);

  /// @brief Method .ctor, addr 0x4920774, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainUtility___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainUtility___c__DisplayClass2_0(TerrainUtility___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainUtility___c__DisplayClass2_0(TerrainUtility___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18145 };

  /// @brief Field onlyAutoConnectedTerrains, offset: 0x10, size: 0x1, def value: None
  bool ___onlyAutoConnectedTerrains;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0, ___onlyAutoConnectedTerrains) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
// Dependencies System.Object
namespace UnityEngine::TerrainUtils {
// Is value type: false
// CS Name: UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1
class CORDL_TYPE TerrainUtility___c__DisplayClass2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* CS$__8__locals1;

  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) ::UnityW<::UnityEngine::Terrain> t;

  static inline ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1* New_ctor();

  /// @brief Method <CollectTerrains>b__0, addr 0x4920b0c, size 0xdc, virtual false, abstract: false, final false
  inline bool _CollectTerrains_b__0(::UnityEngine::Terrain* x);

  constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_t() const;

  constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* value);

  constexpr void __cordl_internal_set_t(::UnityW<::UnityEngine::Terrain> value);

  /// @brief Method .ctor, addr 0x492077c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainUtility___c__DisplayClass2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility___c__DisplayClass2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainUtility___c__DisplayClass2_1(TerrainUtility___c__DisplayClass2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility___c__DisplayClass2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainUtility___c__DisplayClass2_1(TerrainUtility___c__DisplayClass2_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18146 };

  /// @brief Field t, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Terrain> ___t;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
// Dependencies System.Object
namespace UnityEngine::TerrainUtils {
// Is value type: false
// CS Name: UnityEngine.TerrainUtils.TerrainUtility
class CORDL_TYPE TerrainUtility : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0;

  using __c__DisplayClass2_1 = ::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1;

  /// @brief Method AutoConnect, addr 0x4920784, size 0x388, virtual false, abstract: false, final false
  static inline void AutoConnect();

  /// @brief Method ClearConnectivity, addr 0x49203a0, size 0xf8, virtual false, abstract: false, final false
  static inline void ClearConnectivity();

  /// @brief Method CollectTerrains, addr 0x4920498, size 0x2dc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TerrainUtils::TerrainMap*>* CollectTerrains(bool onlyAutoConnectedTerrains);

  /// @brief Method ValidTerrainsExist, addr 0x4920338, size 0x68, virtual false, abstract: false, final false
  static inline bool ValidTerrainsExist();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainUtility(TerrainUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainUtility(TerrainUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18147 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TerrainUtils
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainUtility*, "UnityEngine.TerrainUtils", "TerrainUtility");
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_0*, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_0");
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainUtility___c__DisplayClass2_1*, "UnityEngine.TerrainUtils", "TerrainUtility/<>c__DisplayClass2_1");
