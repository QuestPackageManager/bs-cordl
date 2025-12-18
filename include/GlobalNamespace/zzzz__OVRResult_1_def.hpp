#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRResult_1)
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TStatus> struct OVRResult_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRResult_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TStatus>
// Is value type: true
// CS Name: OVRResult`1<TStatus>
struct CORDL_TYPE OVRResult_1 {
public:
  // Declarations
  __declspec(property(get = get_Status)) TStatus Status;

  __declspec(property(get = get_Success)) bool Success;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRResult_1<TStatus> other);

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_1<TStatus> From(TStatus status);

  /// @brief Method FromFailure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_1<TStatus> FromFailure(TStatus status);

  /// @brief Method FromSuccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_1<TStatus> FromSuccess(TStatus status);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TStatus status);

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TStatus get_Status();

  /// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Success();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>* i___System__IEquatable_1___GlobalNamespace__OVRResult_1_TStatus__();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_1<TStatus> op_Implicit___GlobalNamespace__OVRResult_1_TStatus_(::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::GlobalNamespace::OVRResult_1<TStatus> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResult_1();

  // Ctor Parameters [CppParam { name: "_initialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_statusCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_status", ty: "TStatus", modifiers: "", def_value: None }]
  constexpr OVRResult_1(bool _initialized, int32_t _statusCode, TStatus _status) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _initialized, offset: 0x0, size: 0x1, def value: None
  bool _initialized;

  /// @brief Field _statusCode, offset: 0x4, size: 0x4, def value: None
  int32_t _statusCode;

  /// @brief Field _status, offset: 0x8, size: 0x8, def value: None
  TStatus _status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRResult_1, "", "OVRResult`1");
