#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRResult_2)
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
template <typename TValue, typename TStatus> struct OVRResult_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRResult_2);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename TValue, typename TStatus>
// Is value type: true
// CS Name: OVRResult`2<TValue,TStatus>
struct CORDL_TYPE OVRResult_2 {
public:
  // Declarations
  __declspec(property(get = get_HasValue)) bool HasValue;

  __declspec(property(get = get_Status)) TStatus Status;

  __declspec(property(get = get_Success)) bool Success;

  __declspec(property(get = get_Value)) TValue Value;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRResult_2<TValue, TStatus> other);

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> From(TValue value, TStatus status);

  /// @brief Method FromFailure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> FromFailure(TStatus status);

  /// @brief Method FromSuccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> FromSuccess(TValue value, TStatus status);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(::ByRef<TValue> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue value, TStatus status);

  /// @brief Method get_HasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasValue();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TStatus get_Status();

  /// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Success();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Value();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>* i___System__IEquatable_1___GlobalNamespace__OVRResult_2_TValue_TStatus__();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> op_Implicit___GlobalNamespace__OVRResult_2_TValue_TStatus_(::GlobalNamespace::OVRPlugin_Result result);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::GlobalNamespace::OVRResult_2<TValue, TStatus> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResult_2();

  // Ctor Parameters [CppParam { name: "_initialized", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name:
  // "_statusCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_status", ty: "TStatus", modifiers: "", def_value: None }]
  constexpr OVRResult_2(bool _initialized, TValue _value, int32_t _statusCode, TStatus _status) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7810 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _initialized, offset: 0x0, size: 0x1, def value: None
  bool _initialized;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  TValue _value;

  /// @brief Field _statusCode, offset: 0x10, size: 0x4, def value: None
  int32_t _statusCode;

  /// @brief Field _status, offset: 0x18, size: 0x8, def value: None
  TStatus _status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRResult_2, "", "OVRResult`2");
