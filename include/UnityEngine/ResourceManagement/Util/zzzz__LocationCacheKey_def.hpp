#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LocationCacheKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocationCacheKey)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LocationCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LocationCacheKey);
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.ResourceManagement.Util.IOperationCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.LocationCacheKey
class CORDL_TYPE LocationCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DesiredType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DesiredType, put = __cordl_internal_set_m_DesiredType)) ::System::Type* m_DesiredType;

  /// @brief Field m_Location, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Location, put = __cordl_internal_set_m_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Method Equals, addr 0x479711c, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x47971dc, size 0x64, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method Equals, addr 0x4797180, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::LocationCacheKey* other);

  /// @brief Method GetHashCode, addr 0x4797070, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::ResourceManagement::Util::LocationCacheKey* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType);

  constexpr ::System::Type* const& __cordl_internal_get_m_DesiredType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_DesiredType();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get_m_Location() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_m_Location();

  constexpr void __cordl_internal_set_m_DesiredType(::System::Type* value);

  constexpr void __cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x478ea04, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>* i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocationCacheKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocationCacheKey(LocationCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocationCacheKey(LocationCacheKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15634 };

  /// @brief Field m_Location, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___m_Location;

  /// @brief Field m_DesiredType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___m_DesiredType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::LocationCacheKey, ___m_Location) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::LocationCacheKey, ___m_DesiredType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::LocationCacheKey, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::LocationCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::LocationCacheKey*, "UnityEngine.ResourceManagement.Util", "LocationCacheKey");
