#pragma once
// IWYU pragma private; include "UnityEngine/Cache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cache)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct Cache;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Cache);
// Dependencies System.IEquatable`1<T>
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

  /// @brief Method Cache_GetPath, addr 0x485f1e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW Cache_GetPath(int32_t handle);

  /// @brief Method Cache_IsValid, addr 0x485f170, size 0x3c, virtual false, abstract: false, final false
  static inline bool Cache_IsValid(int32_t handle);

  /// @brief Method Cache_SetExpirationDelay, addr 0x485f2f0, size 0x44, virtual false, abstract: false, final false
  static inline void Cache_SetExpirationDelay(int32_t handle, int32_t value);

  /// @brief Method Cache_SetMaximumDiskSpaceAvailable, addr 0x485f268, size 0x44, virtual false, abstract: false, final false
  static inline void Cache_SetMaximumDiskSpaceAvailable(int32_t handle, int64_t value);

  /// @brief Method Equals, addr 0x485f0ac, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x485f124, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Cache other);

  /// @brief Method GetHashCode, addr 0x485f0a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_handle, addr 0x485f09c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method get_path, addr 0x485f1ac, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_valid, addr 0x485f134, size 0x3c, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Cache>"
  constexpr ::System::IEquatable_1<::UnityEngine::Cache>* i___System__IEquatable_1___UnityEngine__Cache_();

  /// @brief Method set_expirationDelay, addr 0x485f2ac, size 0x44, virtual false, abstract: false, final false
  inline void set_expirationDelay(int32_t value);

  /// @brief Method set_maximumAvailableStorageSpace, addr 0x485f224, size 0x44, virtual false, abstract: false, final false
  inline void set_maximumAvailableStorageSpace(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cache();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cache(int32_t m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Cache, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Cache, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cache, "UnityEngine", "Cache");
