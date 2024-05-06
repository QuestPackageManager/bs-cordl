#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputNodeUICache)
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputAssetUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputObjectUICache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputAssetUICache;
}
namespace HoudiniEngineUnity {
class __HEU_InputNodeUICache__HEU_InputObjectUICache;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNodeUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache);
// Type: ::HEU_InputObjectUICache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_InputNodeUICache::HEU_InputObjectUICache*
class CORDL_TYPE __HEU_InputNodeUICache__HEU_InputObjectUICache : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache* New_ctor();

  /// @brief Method .ctor, addr 0x2556354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNodeUICache__HEU_InputObjectUICache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputObjectUICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputNodeUICache__HEU_InputObjectUICache(__HEU_InputNodeUICache__HEU_InputObjectUICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputObjectUICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputNodeUICache__HEU_InputObjectUICache(__HEU_InputNodeUICache__HEU_InputObjectUICache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::HEU_InputAssetUICache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_InputNodeUICache::HEU_InputAssetUICache*
class CORDL_TYPE __HEU_InputNodeUICache__HEU_InputAssetUICache : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache* New_ctor();

  /// @brief Method .ctor, addr 0x255635c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputNodeUICache__HEU_InputAssetUICache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputAssetUICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputNodeUICache__HEU_InputAssetUICache(__HEU_InputNodeUICache__HEU_InputAssetUICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputNodeUICache__HEU_InputAssetUICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputNodeUICache__HEU_InputAssetUICache(__HEU_InputNodeUICache__HEU_InputAssetUICache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputNodeUICache
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_InputNodeUICache*
class CORDL_TYPE HEU_InputNodeUICache : public ::System::Object {
public:
  // Declarations
  using HEU_InputAssetUICache = ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache;

  using HEU_InputObjectUICache = ::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache;

  /// @brief Field _inputAssetCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAssetCache,
                      put = __cordl_internal_set__inputAssetCache))::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>* _inputAssetCache;

  /// @brief Field _inputObjectCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputObjectCache,
                      put = __cordl_internal_set__inputObjectCache))::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>* _inputObjectCache;

  static inline ::HoudiniEngineUnity::HEU_InputNodeUICache* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>*& __cordl_internal_get__inputAssetCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>*> const&
  __cordl_internal_get__inputAssetCache() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>*& __cordl_internal_get__inputObjectCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>*> const&
  __cordl_internal_get__inputObjectCache() const;

  constexpr void __cordl_internal_set__inputAssetCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>* value);

  constexpr void __cordl_internal_set__inputObjectCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>* value);

  /// @brief Method .ctor, addr 0x2556294, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNodeUICache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputNodeUICache(HEU_InputNodeUICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputNodeUICache(HEU_InputNodeUICache const&) = delete;

  /// @brief Field _inputObjectCache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*>* ____inputObjectCache;

  /// @brief Field _inputAssetCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*>* ____inputAssetCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNodeUICache, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNodeUICache, ____inputObjectCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNodeUICache, ____inputAssetCache) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputAssetUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputAssetUICache");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputNodeUICache__HEU_InputObjectUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputObjectUICache");
