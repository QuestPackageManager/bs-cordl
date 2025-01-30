#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputNodeUICache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputNodeUICache)
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache_HEU_InputAssetUICache;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache_HEU_InputObjectUICache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache_HEU_InputAssetUICache;
}
namespace HoudiniEngineUnity {
class HEU_InputNodeUICache_HEU_InputObjectUICache;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNodeUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputNodeUICache/HEU_InputObjectUICache
class CORDL_TYPE HEU_InputNodeUICache_HEU_InputObjectUICache : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache* New_ctor();

  /// @brief Method .ctor, addr 0x3a2bc14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNodeUICache_HEU_InputObjectUICache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache_HEU_InputObjectUICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputNodeUICache_HEU_InputObjectUICache(HEU_InputNodeUICache_HEU_InputObjectUICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache_HEU_InputObjectUICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputNodeUICache_HEU_InputObjectUICache(HEU_InputNodeUICache_HEU_InputObjectUICache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputNodeUICache/HEU_InputAssetUICache
class CORDL_TYPE HEU_InputNodeUICache_HEU_InputAssetUICache : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache* New_ctor();

  /// @brief Method .ctor, addr 0x3a2bc1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputNodeUICache_HEU_InputAssetUICache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache_HEU_InputAssetUICache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputNodeUICache_HEU_InputAssetUICache(HEU_InputNodeUICache_HEU_InputAssetUICache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputNodeUICache_HEU_InputAssetUICache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputNodeUICache_HEU_InputAssetUICache(HEU_InputNodeUICache_HEU_InputAssetUICache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputNodeUICache
class CORDL_TYPE HEU_InputNodeUICache : public ::System::Object {
public:
  // Declarations
  using HEU_InputAssetUICache = ::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache;

  using HEU_InputObjectUICache = ::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache;

  /// @brief Field _inputAssetCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inputAssetCache,
                      put = __cordl_internal_set__inputAssetCache)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>* _inputAssetCache;

  /// @brief Field _inputObjectCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputObjectCache,
                      put = __cordl_internal_set__inputObjectCache)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>* _inputObjectCache;

  static inline ::HoudiniEngineUnity::HEU_InputNodeUICache* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>* const& __cordl_internal_get__inputAssetCache() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>*& __cordl_internal_get__inputAssetCache();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>* const& __cordl_internal_get__inputObjectCache() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>*& __cordl_internal_get__inputObjectCache();

  constexpr void __cordl_internal_set__inputAssetCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>* value);

  constexpr void __cordl_internal_set__inputObjectCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>* value);

  /// @brief Method .ctor, addr 0x3a2bb50, size 0xc4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11635 };

  /// @brief Field _inputObjectCache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>* ____inputObjectCache;

  /// @brief Field _inputAssetCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>* ____inputAssetCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNodeUICache, ____inputObjectCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputNodeUICache, ____inputAssetCache) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputNodeUICache, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputAssetUICache");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*, "HoudiniEngineUnity", "HEU_InputNodeUICache/HEU_InputObjectUICache");
