#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5289))
// CS Name: ::NoteCutter::CuttableBySaberSortParams*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field cuttableBySaber, offset 0x10, size 0x8
  __declspec(property(get = __get_cuttableBySaber, put = __set_cuttableBySaber))::GlobalNamespace::CuttableBySaber* cuttableBySaber;

  /// @brief Field distance, offset 0x18, size 0x4
  __declspec(property(get = __get_distance, put = __set_distance)) float_t distance;

  /// @brief Field pos, offset 0x1c, size 0xc
  __declspec(property(get = __get_pos, put = __set_pos))::UnityEngine::Vector3 pos;

  constexpr ::GlobalNamespace::CuttableBySaber*& __get_cuttableBySaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CuttableBySaber*> const& __get_cuttableBySaber() const;

  constexpr void __set_cuttableBySaber(::GlobalNamespace::CuttableBySaber* value);

  constexpr float_t& __get_distance();

  constexpr float_t const& __get_distance() const;

  constexpr void __set_distance(float_t value);

  constexpr ::UnityEngine::Vector3& __get_pos();

  constexpr ::UnityEngine::Vector3 const& __get_pos() const;

  constexpr void __set_pos(::UnityEngine::Vector3 value);

  static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams* New_ctor();

  /// @brief Method .ctor, addr 0x22631cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutter__CuttableBySaberSortParams(__NoteCutter__CuttableBySaberSortParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutter__CuttableBySaberSortParams();

public:
  /// @brief Field cuttableBySaber, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CuttableBySaber* ___cuttableBySaber;

  /// @brief Field distance, offset: 0x18, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field pos, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___cuttableBySaber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams, ___pos) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CuttableBySaberSortParamsComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5290))
// CS Name: ::NoteCutter::CuttableBySaberSortParamsComparer*
class CORDL_TYPE __NoteCutter__CuttableBySaberSortParamsComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Method Compare, addr 0x22631d4, size 0x124, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* p0, ::System::Object* p1);

  static inline ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* New_ctor();

  /// @brief Method .ctor, addr 0x22631c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutter__CuttableBySaberSortParamsComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutter__CuttableBySaberSortParamsComparer(__NoteCutter__CuttableBySaberSortParamsComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutter__CuttableBySaberSortParamsComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5291))
// CS Name: ::NoteCutter*
class CORDL_TYPE NoteCutter : public ::System::Object {
public:
  // Declarations
  using CuttableBySaberSortParamsComparer = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer;

  using CuttableBySaberSortParams = ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams;

  /// @brief Field _colliders, offset 0x10, size 0x8
  __declspec(property(get = __get__colliders, put = __set__colliders))::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> _colliders;

  /// @brief Field _cuttableBySaberSortParams, offset 0x18, size 0x8
  __declspec(property(get = __get__cuttableBySaberSortParams,
                      put = __set__cuttableBySaberSortParams))::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*,
                                                                       ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> _cuttableBySaberSortParams;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* _comparer;

  constexpr ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*>& __get__colliders();

  constexpr ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> const& __get__colliders() const;

  constexpr void __set__colliders(::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*>& __get__cuttableBySaberSortParams();

  constexpr ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> const&
  __get__cuttableBySaberSortParams() const;

  constexpr void __set__cuttableBySaberSortParams(::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> value);

  constexpr ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer*> const& __get__comparer() const;

  constexpr void __set__comparer(::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* value);

  static inline ::GlobalNamespace::NoteCutter* New_ctor();

  /// @brief Method .ctor, addr 0x226308c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Cut, addr 0x2262a5c, size 0x524, virtual false, abstract: false, final false
  inline void Cut(::GlobalNamespace::Saber* saber);

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutter(NoteCutter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutter(NoteCutter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutter();

public:
  /// @brief Field _colliders, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> ____colliders;

  /// @brief Field _cuttableBySaberSortParams, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*, ::Array<::GlobalNamespace::__NoteCutter__CuttableBySaberSortParams*>*> ____cuttableBySaberSortParams;

  /// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__NoteCutter__CuttableBySaberSortParamsComparer* ____comparer;

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
