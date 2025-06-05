#pragma once
// IWYU pragma private; include "Unity/Burst/BurstRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstRuntime)
namespace System {
class Type;
}
namespace Unity::Burst {
template <typename T> struct BurstRuntime_HashCode32_1;
}
namespace Unity::Burst {
template <typename T> struct BurstRuntime_HashCode64_1;
}
namespace Unity::Burst {
class BurstRuntime_PreserveAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class BurstRuntime;
}
namespace Unity::Burst {
class BurstRuntime_PreserveAttribute;
}
namespace Unity::Burst {
template <typename T> struct BurstRuntime_HashCode32_1;
}
namespace Unity::Burst {
template <typename T> struct BurstRuntime_HashCode64_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::BurstRuntime);
MARK_REF_PTR_T(::Unity::Burst::BurstRuntime_PreserveAttribute);
MARK_GEN_VAL_T(::Unity::Burst::BurstRuntime_HashCode32_1);
MARK_GEN_VAL_T(::Unity::Burst::BurstRuntime_HashCode64_1);
// Dependencies
namespace Unity::Burst {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Burst.BurstRuntime/HashCode32`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE BurstRuntime_HashCode32_1 {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) int32_t Value;

  static inline int32_t getStaticF_Value();

  static inline void setStaticF_Value(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstRuntime_HashCode32_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Burst.BurstRuntime/HashCode64`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE BurstRuntime_HashCode64_1 {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) int64_t Value;

  static inline int64_t getStaticF_Value();

  static inline void setStaticF_Value(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstRuntime_HashCode64_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Burst
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstRuntime/PreserveAttribute
class CORDL_TYPE BurstRuntime_PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::BurstRuntime_PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x450736c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstRuntime_PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstRuntime_PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstRuntime_PreserveAttribute(BurstRuntime_PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstRuntime_PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstRuntime_PreserveAttribute(BurstRuntime_PreserveAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstRuntime_PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstRuntime
class CORDL_TYPE BurstRuntime : public ::System::Object {
public:
  // Declarations
  template <typename T> using HashCode32_1 = ::Unity::Burst::BurstRuntime_HashCode32_1<T>;

  template <typename T> using HashCode64_1 = ::Unity::Burst::BurstRuntime_HashCode64_1<T>;

  using PreserveAttribute = ::Unity::Burst::BurstRuntime_PreserveAttribute;

  /// @brief Method GetHashCode32, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t GetHashCode32();

  /// @brief Method GetHashCode32, addr 0x4506ec0, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GetHashCode32(::System::Type* type);

  /// @brief Method GetHashCode64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int64_t GetHashCode64();

  /// @brief Method GetHashCode64, addr 0x4506f68, size 0x24, virtual false, abstract: false, final false
  static inline int64_t GetHashCode64(::System::Type* type);

  /// @brief Method GetUTF8LiteralPointer, addr 0x4507320, size 0x4c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<uint8_t> GetUTF8LiteralPointer(::StringW str, ::ByRef<int32_t> byteCount);

  /// @brief Method HashStringWithFNV1A32, addr 0x4506ee4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t HashStringWithFNV1A32(::StringW text);

  /// @brief Method HashStringWithFNV1A64, addr 0x4506f8c, size 0x8c, virtual false, abstract: false, final false
  static inline int64_t HashStringWithFNV1A64(::StringW text);

  /// @brief Method Initialize, addr 0x45071f8, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method LoadAdditionalLibrary, addr 0x4507018, size 0x6c, virtual false, abstract: false, final false
  static inline bool LoadAdditionalLibrary(::StringW pathToLibBurstGenerated);

  /// @brief Method LoadAdditionalLibraryInternal, addr 0x4507084, size 0x15c, virtual false, abstract: false, final false
  static inline bool LoadAdditionalLibraryInternal(::StringW pathToLibBurstGenerated);

  /// @brief Method Log, addr 0x4507308, size 0x18, virtual false, abstract: false, final false
  static inline void Log(::cordl_internals::Ptr<uint8_t> message, int32_t logType, ::cordl_internals::Ptr<uint8_t> fileName, int32_t lineNumber);

  /// @brief Method PreventRequiredAttributeStrip, addr 0x45071fc, size 0x10c, virtual false, abstract: false, final false
  static inline void PreventRequiredAttributeStrip();

  /// @brief Method RuntimeLog, addr 0x45071e0, size 0x18, virtual false, abstract: false, final false
  static inline void RuntimeLog(::cordl_internals::Ptr<uint8_t> message, int32_t logType, ::cordl_internals::Ptr<uint8_t> fileName, int32_t lineNumber);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstRuntime(BurstRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstRuntime(BurstRuntime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstRuntime, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::BurstRuntime);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstRuntime*, "Unity.Burst", "BurstRuntime");
NEED_NO_BOX(::Unity::Burst::BurstRuntime_PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstRuntime_PreserveAttribute*, "Unity.Burst", "BurstRuntime/PreserveAttribute");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Burst::BurstRuntime_HashCode32_1, "Unity.Burst", "BurstRuntime/HashCode32`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Burst::BurstRuntime_HashCode64_1, "Unity.Burst", "BurstRuntime/HashCode64`1");
