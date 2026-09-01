#pragma once
// IWYU pragma private; include "UnityEngine\Cache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cache)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct Cache;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Cache);
DEFINE_IL2CPP_CLASS(::UnityEngine::Cache, "UnityEngine", "Cache");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Cache
struct CORDL_TYPE Cache {
public:
  // Declarations
  __declspec(property(put = set_expirationDelay)) int32_t expirationDelay;

  __declspec(property(get = get_handle)) int32_t handle;

  __declspec(property(put = set_maximumAvailableStorageSpace)) int64_t maximumAvailableStorageSpace;

  __declspec(property(get = get_path)) ::StringW path;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Cache>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Cache>*();

  /// @brief Method Cache_GetPath, addr 0x6a69830, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW Cache_GetPath(int32_t handle);

  /// @brief Method Cache_GetPath_Injected, addr 0x6a698fc, size 0x44, virtual false, abstract: false, final false
  static inline void Cache_GetPath_Injected(int32_t handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Cache_IsValid, addr 0x6a697ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool Cache_IsValid(int32_t handle);

  /// @brief Method Cache_SetExpirationDelay, addr 0x6a69a0c, size 0x44, virtual false, abstract: false, final false
  static inline void Cache_SetExpirationDelay(int32_t handle, int32_t value);

  /// @brief Method Cache_SetMaximumDiskSpaceAvailable, addr 0x6a69984, size 0x44, virtual false, abstract: false, final false
  static inline void Cache_SetMaximumDiskSpaceAvailable(int32_t handle, int64_t value);

  /// @brief Method Equals, addr 0x6a69724, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x6a697a0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Cache other);

  /// @brief Method GetHashCode, addr 0x6a6971c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_handle, addr 0x6a69714, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method get_path, addr 0x6a69828, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_valid, addr 0x6a697b0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Cache>"
  constexpr ::System::IEquatable_1<::UnityEngine::Cache>* i___System__IEquatable_1___UnityEngine__Cache_();

  /// @brief Method set_expirationDelay, addr 0x6a699c8, size 0x44, virtual false, abstract: false, final false
  inline void set_expirationDelay(int32_t value);

  /// @brief Method set_maximumAvailableStorageSpace, addr 0x6a69940, size 0x44, virtual false, abstract: false, final false
  inline void set_maximumAvailableStorageSpace(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cache();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cache(int32_t m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10078 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Cache, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Cache) == 0x4, "Size mismatch!");

} // namespace UnityEngine
