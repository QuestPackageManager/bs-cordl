#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutter)
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class NoteCutter_CuttableBySaberSortParamsComparer;
}
namespace GlobalNamespace {
class NoteCutter_CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class Saber;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutter;
}
namespace GlobalNamespace {
class NoteCutter_CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class NoteCutter_CuttableBySaberSortParamsComparer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutter);
MARK_REF_PTR_T(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams);
MARK_REF_PTR_T(::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer);
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutter/CuttableBySaberSortParams
class CORDL_TYPE NoteCutter_CuttableBySaberSortParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field cuttableBySaber, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cuttableBySaber, put = __cordl_internal_set_cuttableBySaber)) ::UnityW<::GlobalNamespace::CuttableBySaber> cuttableBySaber;

  /// @brief Field distance, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field pos, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) ::UnityEngine::Vector3 pos;

  static inline ::GlobalNamespace::NoteCutter_CuttableBySaberSortParams* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& __cordl_internal_get_cuttableBySaber() const;

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& __cordl_internal_get_cuttableBySaber();

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos();

  constexpr void __cordl_internal_set_cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value);

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_pos(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3bf7ee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutter_CuttableBySaberSortParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter_CuttableBySaberSortParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutter_CuttableBySaberSortParams(NoteCutter_CuttableBySaberSortParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter_CuttableBySaberSortParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutter_CuttableBySaberSortParams(NoteCutter_CuttableBySaberSortParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4653 };

  /// @brief Field cuttableBySaber, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CuttableBySaber> ___cuttableBySaber;

  /// @brief Field distance, offset: 0x18, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field pos, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams, ___cuttableBySaber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams, ___distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams, ___pos) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.IComparer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutter/CuttableBySaberSortParamsComparer
class CORDL_TYPE NoteCutter_CuttableBySaberSortParamsComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x3bf7eec, size 0x120, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* p0, ::System::Object* p1);

  static inline ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3bf7edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutter_CuttableBySaberSortParamsComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter_CuttableBySaberSortParamsComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutter_CuttableBySaberSortParamsComparer(NoteCutter_CuttableBySaberSortParamsComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter_CuttableBySaberSortParamsComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutter_CuttableBySaberSortParamsComparer(NoteCutter_CuttableBySaberSortParamsComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4654 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutter
class CORDL_TYPE NoteCutter : public ::System::Object {
public:
  // Declarations
  using CuttableBySaberSortParams = ::GlobalNamespace::NoteCutter_CuttableBySaberSortParams;

  using CuttableBySaberSortParamsComparer = ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer;

  /// @brief Field _colliders, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colliders, put = __cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
      _colliders;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* _comparer;

  /// @brief Field _cuttableBySaberSortParams, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cuttableBySaberSortParams,
      put = __cordl_internal_set__cuttableBySaberSortParams)) ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*>
      _cuttableBySaberSortParams;

  /// @brief Method Cut, addr 0x3bf7764, size 0x540, virtual false, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber);

  static inline ::GlobalNamespace::NoteCutter* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__colliders() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__colliders();

  constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* const& __cordl_internal_get__comparer() const;

  constexpr ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*& __cordl_internal_get__comparer();

  constexpr ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*> const&
  __cordl_internal_get__cuttableBySaberSortParams() const;

  constexpr ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*>& __cordl_internal_get__cuttableBySaberSortParams();

  constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set__comparer(::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* value);

  constexpr void
  __cordl_internal_set__cuttableBySaberSortParams(::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*> value);

  /// @brief Method .ctor, addr 0x3bf7da8, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutter(NoteCutter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutter(NoteCutter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4655 };

  /// @brief Field kMaxNumberOfColliders offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfColliders{ static_cast<int32_t>(0x10) };

  /// @brief Field _colliders, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ____colliders;

  /// @brief Field _cuttableBySaberSortParams, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, ::Array<::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*>*> ____cuttableBySaberSortParams;

  /// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer* ____comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutter, ____colliders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter, ____cuttableBySaberSortParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter, ____comparer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutter, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter*, "", "NoteCutter");
NEED_NO_BOX(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter_CuttableBySaberSortParams*, "", "NoteCutter/CuttableBySaberSortParams");
NEED_NO_BOX(::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter_CuttableBySaberSortParamsComparer*, "", "NoteCutter/CuttableBySaberSortParamsComparer");
