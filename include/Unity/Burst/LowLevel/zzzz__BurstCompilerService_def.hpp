#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompilerService)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace Unity::Burst::LowLevel {
struct __BurstCompilerService__BurstLogType;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace Unity::Burst::LowLevel {
struct __BurstCompilerService__BurstLogType;
}
namespace Unity::Burst::LowLevel {
class BurstCompilerService;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType);
MARK_REF_PTR_T(::Unity::Burst::LowLevel::BurstCompilerService);
// Type: ::BurstLogType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst::LowLevel {
// Is value type: true
// CS Name: ::BurstCompilerService::BurstLogType
struct CORDL_TYPE __BurstCompilerService__BurstLogType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BurstCompilerService__BurstLogType_Unwrapped
  enum struct ____BurstCompilerService__BurstLogType_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BurstCompilerService__BurstLogType_Unwrapped() const noexcept {
    return static_cast<____BurstCompilerService__BurstLogType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompilerService__BurstLogType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BurstCompilerService__BurstLogType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType const Info;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst::LowLevel
// Type: Unity.Burst.LowLevel::BurstCompilerService
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst::LowLevel {
// Is value type: false
// CS Name: ::Unity.Burst.LowLevel::BurstCompilerService*
class CORDL_TYPE BurstCompilerService : public ::System::Object {
public:
  // Declarations
  using BurstLogType = ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType;

  /// @brief Method CompileAsyncDelegateMethod, addr 0x33fec34, size 0x44, virtual false, abstract: false, final false
  static inline int32_t CompileAsyncDelegateMethod(::System::Object* delegateMethod, ::StringW compilerOptions);

  /// @brief Method GetAsyncCompiledAsyncDelegateMethod, addr 0x33fec78, size 0x3c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetAsyncCompiledAsyncDelegateMethod(int32_t userID);

  /// @brief Method GetCurrentExecutionMode, addr 0x33fed44, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetCurrentExecutionMode();

  /// @brief Method GetDisassembly, addr 0x33febf0, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetDisassembly(::System::Reflection::MethodInfo* m, ::StringW compilerOptions);

  /// @brief Method GetOrCreateSharedMemory, addr 0x33fecb4, size 0x54, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetOrCreateSharedMemory(ByRef<::UnityEngine::Hash128> key, uint32_t size_of, uint32_t alignment);

  /// @brief Method LoadBurstLibrary, addr 0x33fedd8, size 0x3c, virtual false, abstract: false, final false
  static inline bool LoadBurstLibrary(::StringW fullPathToLibBurstGenerated);

  /// @brief Method Log, addr 0x33fed6c, size 0x6c, virtual false, abstract: false, final false
  static inline void Log(::cordl_internals::Ptr<void> userData, ::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType logType, ::cordl_internals::Ptr<uint8_t> message,
                         ::cordl_internals::Ptr<uint8_t> filename, int32_t lineNumber);

  /// @brief Method SetCurrentExecutionMode, addr 0x33fed08, size 0x3c, virtual false, abstract: false, final false
  static inline void SetCurrentExecutionMode(uint32_t environment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerService(BurstCompilerService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerService(BurstCompilerService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::LowLevel::BurstCompilerService, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::LowLevel::__BurstCompilerService__BurstLogType, "Unity.Burst.LowLevel", "BurstCompilerService/BurstLogType");
NEED_NO_BOX(::Unity::Burst::LowLevel::BurstCompilerService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::LowLevel::BurstCompilerService*, "Unity.Burst.LowLevel", "BurstCompilerService");
