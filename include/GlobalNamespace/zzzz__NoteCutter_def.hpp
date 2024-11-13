#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutter)
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParamsComparer;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParams;
}
namespace System::Collections {
class IComparer;
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
class __NoteCutter__CuttableBySaberSortParams;
}
namespace GlobalNamespace {
class __NoteCutter__CuttableBySaberSortParamsComparer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutter);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer);
// Type: ::CuttableBySaberSortParams
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutter::CuttableBySaberSortParams*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field cuttableBySaber, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cuttableBySaber, put = __cordl_internal_set_cuttableBySaber)) ::UnityW<::GlobalNamespace::CuttableBySaber> cuttableBySaber;

  /// @brief Field distance, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field pos, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) ::UnityEngine::Vector3 pos;

  static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& __cordl_internal_get_cuttableBySaber() const;

  constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& __cordl_internal_get_cuttableBySaber();

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos();

  constexpr void __cordl_internal_set_cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value);

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_pos(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3b84aec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutter__CuttableBySaberSortParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams const&) = delete;

  /// @brief Field cuttableBySaber, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CuttableBySaber> ___cuttableBySaber;

  /// @brief Field distance, offset: 0x18, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field pos, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___cuttableBySaber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___pos) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CuttableBySaberSortParamsComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutter::CuttableBySaberSortParamsComparer*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParamsComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x3b84af4, size 0x120, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* p0, ::System::Object* p1);

  static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3b84ae4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutter__CuttableBySaberSortParamsComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutter*
class CORDL_TYPE NoteCutter : public ::System::Object {
public:
  // Declarations
  using CuttableBySaberSortParams = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams;

  using CuttableBySaberSortParamsComparer = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer;

  /// @brief Field _colliders, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colliders, put = __cordl_internal_set__colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
      _colliders;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* _comparer;

  /// @brief Field _cuttableBySaberSortParams, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cuttableBySaberSortParams,
      put =
          __cordl_internal_set__cuttableBySaberSortParams)) ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>
      _cuttableBySaberSortParams;

  /// @brief Method Cut, addr 0x3b8436c, size 0x540, virtual false, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber);

  static inline ::GlobalNamespace::NoteCutter* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__colliders() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__colliders();

  constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*& __cordl_internal_get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*> const& __cordl_internal_get__comparer() const;

  constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> const&
  __cordl_internal_get__cuttableBySaberSortParams() const;

  constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>&
  __cordl_internal_get__cuttableBySaberSortParams();

  constexpr void __cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set__comparer(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* value);

  constexpr void
  __cordl_internal_set__cuttableBySaberSortParams(::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> value);

  /// @brief Method .ctor, addr 0x3b849b0, size 0x134, virtual false, abstract: false, final false
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

  /// @brief Field _colliders, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ____colliders;

  /// @brief Field _cuttableBySaberSortParams, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> ____cuttableBySaberSortParams;

  /// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* ____comparer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4639 };

  /// @brief Field kMaxNumberOfColliders offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfColliders{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutter, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter, ____colliders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter, ____cuttableBySaberSortParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutter, ____comparer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter*, "", "NoteCutter");
NEED_NO_BOX(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, "", "NoteCutter/CuttableBySaberSortParams");
NEED_NO_BOX(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*, "", "NoteCutter/CuttableBySaberSortParamsComparer");
