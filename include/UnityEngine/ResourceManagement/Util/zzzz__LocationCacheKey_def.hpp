#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocationCacheKey)
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LocationCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LocationCacheKey);
// Type: UnityEngine.ResourceManagement.Util::LocationCacheKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13970))
// CS Name: ::UnityEngine.ResourceManagement.Util::LocationCacheKey*
class CORDL_TYPE LocationCacheKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Location, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Location, put = __set_m_Location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location;

  /// @brief Field m_DesiredType, offset 0x18, size 0x8
  __declspec(property(get = __get_m_DesiredType, put = __set_m_DesiredType))::System::Type* m_DesiredType;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __get_m_Location();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __get_m_Location() const;

  constexpr void __set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr ::System::Type*& __get_m_DesiredType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_m_DesiredType() const;

  constexpr void __set_m_DesiredType(::System::Type* value);

  static inline ::UnityEngine::ResourceManagement::Util::LocationCacheKey* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType);

  /// @brief Method .ctor addr 0x2bcbc00 size 0xf8 virtual false final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType);

  /// @brief Method GetHashCode addr 0x2bd1618 size 0xac virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2bd16c4 size 0x64 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2bd1784 size 0x64 virtual true final true
  inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other);

  /// @brief Method Equals addr 0x2bd1728 size 0x5c virtual false final false
  inline bool Equals(::UnityEngine::ResourceManagement::Util::LocationCacheKey* other);

  // Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocationCacheKey(LocationCacheKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocationCacheKey(LocationCacheKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocationCacheKey();

public:
  /// @brief Field m_Location, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___m_Location;

  /// @brief Field m_DesiredType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___m_DesiredType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::LocationCacheKey, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::LocationCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::LocationCacheKey*, "UnityEngine.ResourceManagement.Util", "LocationCacheKey");
