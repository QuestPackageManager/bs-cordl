#pragma once
// IWYU pragma private; include "GlobalNamespace/SDFArrayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SDFArrayManager)
namespace GlobalNamespace {
class SDFPoint;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class SDFArrayManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SDFArrayManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SDFArrayManager
class CORDL_TYPE SDFArrayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isInitialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _sdfArrayValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sdfArrayValues, put = __cordl_internal_set__sdfArrayValues)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _sdfArrayValues;

  /// @brief Field _sdfPointArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sdfPointArray,
                      put = __cordl_internal_set__sdfPointArray)) ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*>
      _sdfPointArray;

  /// @brief Field _sdfPointsArray, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__sdfPointsArray, put = setStaticF__sdfPointsArray)) int32_t _sdfPointsArray;

  /// @brief Method Awake, addr 0x565e57c, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x565e580, size 0x70, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::SDFArrayManager* New_ctor();

  /// @brief Method Update, addr 0x565e5f0, size 0x10c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__sdfArrayValues() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__sdfArrayValues();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*> const& __cordl_internal_get__sdfPointArray() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*>& __cordl_internal_get__sdfPointArray();

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__sdfArrayValues(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__sdfPointArray(::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*> value);

  /// @brief Method .ctor, addr 0x565e6fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__sdfPointsArray();

  static inline void setStaticF__sdfPointsArray(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDFArrayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SDFArrayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDFArrayManager(SDFArrayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDFArrayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDFArrayManager(SDFArrayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19749 };

  /// @brief Field _sdfPointArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SDFPoint>, ::Array<::UnityW<::GlobalNamespace::SDFPoint>>*> ____sdfPointArray;

  /// @brief Field _sdfArrayValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____sdfArrayValues;

  /// @brief Field _isInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SDFArrayManager, ____sdfPointArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFArrayManager, ____sdfArrayValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFArrayManager, ____isInitialized) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SDFArrayManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SDFArrayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SDFArrayManager*, "", "SDFArrayManager");
