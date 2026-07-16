#pragma once
// IWYU pragma private; include "System/Threading/Volatile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace System::Threading {
struct Volatile_VolatileBoolean;
}
namespace System::Threading {
struct Volatile_VolatileInt32;
}
namespace System::Threading {
struct Volatile_VolatileObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Volatile;
}
namespace System::Threading {
struct Volatile_VolatileBoolean;
}
namespace System::Threading {
struct Volatile_VolatileInt32;
}
namespace System::Threading {
struct Volatile_VolatileObject;
}
// Write type traits
MARK_REF_T(::System::Threading::Volatile*);
MARK_VAL_T(::System::Threading::Volatile_VolatileBoolean);
MARK_VAL_T(::System::Threading::Volatile_VolatileInt32);
MARK_VAL_T(::System::Threading::Volatile_VolatileObject);
DEFINE_IL2CPP_CLASS(::System::Threading::Volatile*, "System.Threading", "Volatile");
DEFINE_IL2CPP_CLASS(::System::Threading::Volatile_VolatileBoolean, "System.Threading", "Volatile/VolatileBoolean");
DEFINE_IL2CPP_CLASS(::System::Threading::Volatile_VolatileInt32, "System.Threading", "Volatile/VolatileInt32");
DEFINE_IL2CPP_CLASS(::System::Threading::Volatile_VolatileObject, "System.Threading", "Volatile/VolatileObject");
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileBoolean
struct CORDL_TYPE Volatile_VolatileBoolean {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile_VolatileBoolean();

  // Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: None }]
  constexpr Volatile_VolatileBoolean(bool Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2766 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Value, offset: 0x0, size: 0x1, def value: None
  bool Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Volatile_VolatileBoolean, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Threading::Volatile_VolatileBoolean) == 0x1, "Size mismatch!");

} // namespace System::Threading
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileInt32
struct CORDL_TYPE Volatile_VolatileInt32 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile_VolatileInt32();

  // Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Volatile_VolatileInt32(int32_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Value, offset: 0x0, size: 0x4, def value: None
  int32_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Volatile_VolatileInt32, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Threading::Volatile_VolatileInt32) == 0x4, "Size mismatch!");

} // namespace System::Threading
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileObject
struct CORDL_TYPE Volatile_VolatileObject {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile_VolatileObject();

  // Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr Volatile_VolatileObject(::System::Object* Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  ::System::Object* Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Volatile_VolatileObject, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Threading::Volatile_VolatileObject) == 0x8, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Volatile
class CORDL_TYPE Volatile : public ::System::Object {
public:
  // Declarations
  using VolatileBoolean = ::System::Threading::Volatile_VolatileBoolean;

  using VolatileInt32 = ::System::Threading::Volatile_VolatileInt32;

  using VolatileObject = ::System::Threading::Volatile_VolatileObject;

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Read(::by_ref<T> location);

  /// @brief Method Read, addr 0x5cb8ee0, size 0xc, virtual false, abstract: false, final false
  static inline bool Read(::by_ref<bool> location);

  /// @brief Method Read, addr 0x5cb8ef8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Read(::by_ref<int32_t> location);

  /// @brief Method Read, addr 0x5cb8f10, size 0xc, virtual false, abstract: false, final false
  static inline int64_t Read(::by_ref<int64_t> location);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Write(::by_ref<T> location, T value);

  /// @brief Method Write, addr 0x5cb8eec, size 0xc, virtual false, abstract: false, final false
  static inline void Write(::by_ref<bool> location, bool value);

  /// @brief Method Write, addr 0x5cb8f04, size 0xc, virtual false, abstract: false, final false
  static inline void Write(::by_ref<int32_t> location, int32_t value);

  /// @brief Method Write, addr 0x5cb8f1c, size 0xc, virtual false, abstract: false, final false
  static inline void Write(::by_ref<int64_t> location, int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Volatile(Volatile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Volatile(Volatile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2769 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Volatile) == 0x10, "Size mismatch!");

} // namespace System::Threading
