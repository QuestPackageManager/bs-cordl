#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineLightManager)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class LineLightManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LineLightManager);
// Type: ::LineLightManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LineLightManager*
class CORDL_TYPE LineLightManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeLineLightsCountID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__activeLineLightsCountID, put = setStaticF__activeLineLightsCountID)) int32_t _activeLineLightsCountID;

  /// @brief Field _colors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colors;

  /// @brief Field _dirLengths, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dirLengths, put = __cordl_internal_set__dirLengths))::ArrayW<float_t, ::Array<float_t>*> _dirLengths;

  /// @brief Field _dirs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dirs, put = __cordl_internal_set__dirs))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _dirs;

  /// @brief Field _lineLightColorsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lineLightColorsID, put = setStaticF__lineLightColorsID)) int32_t _lineLightColorsID;

  /// @brief Field _lineLightDirLengthsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lineLightDirLengthsID, put = setStaticF__lineLightDirLengthsID)) int32_t _lineLightDirLengthsID;

  /// @brief Field _lineLightDirsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lineLightDirsID, put = setStaticF__lineLightDirsID)) int32_t _lineLightDirsID;

  /// @brief Field _lineLightPointsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__lineLightPointsID, put = setStaticF__lineLightPointsID)) int32_t _lineLightPointsID;

  /// @brief Field _points, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__points, put = __cordl_internal_set__points))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _points;

  static inline ::GlobalNamespace::LineLightManager* New_ctor();

  /// @brief Method Update, addr 0x24f6190, size 0x370, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__colors();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__dirLengths() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__dirLengths();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__dirs() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__dirs();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__points() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__points();

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__dirLengths(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__dirs(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__points(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method .ctor, addr 0x24f6500, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__activeLineLightsCountID();

  static inline int32_t getStaticF__lineLightColorsID();

  static inline int32_t getStaticF__lineLightDirLengthsID();

  static inline int32_t getStaticF__lineLightDirsID();

  static inline int32_t getStaticF__lineLightPointsID();

  static inline void setStaticF__activeLineLightsCountID(int32_t value);

  static inline void setStaticF__lineLightColorsID(int32_t value);

  static inline void setStaticF__lineLightDirLengthsID(int32_t value);

  static inline void setStaticF__lineLightDirsID(int32_t value);

  static inline void setStaticF__lineLightPointsID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineLightManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineLightManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineLightManager(LineLightManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineLightManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineLightManager(LineLightManager const&) = delete;

  /// @brief Field _points, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____points;

  /// @brief Field _dirs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____dirs;

  /// @brief Field _dirLengths, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____dirLengths;

  /// @brief Field _colors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colors;

  /// @brief Field kMaxNumberOfLights offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfLights{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LineLightManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLightManager, ____points) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLightManager, ____dirs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLightManager, ____dirLengths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLightManager, ____colors) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LineLightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLightManager*, "", "LineLightManager");
