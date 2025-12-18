#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompileAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Burst/zzzz__FloatMode_def.hpp"
#include "Unity/Burst/zzzz__FloatPrecision_def.hpp"
#include "Unity/Burst/zzzz__OptimizeFor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BurstCompileAttribute)
namespace Unity::Burst {
struct FloatMode;
}
namespace Unity::Burst {
struct FloatPrecision;
}
namespace Unity::Burst {
struct OptimizeFor;
}
// Forward declare root types
namespace Unity::Burst {
class BurstCompileAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::BurstCompileAttribute);
// Dependencies System.Attribute, System.Nullable`1<T>, Unity.Burst.FloatMode, Unity.Burst.FloatPrecision, Unity.Burst.OptimizeFor
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompileAttribute
class CORDL_TYPE BurstCompileAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_CompileSynchronously, put = set_CompileSynchronously)) bool CompileSynchronously;

  __declspec(property(get = get_Debug, put = set_Debug)) bool Debug;

  __declspec(property(get = get_DisableDirectCall, put = set_DisableDirectCall)) bool DisableDirectCall;

  __declspec(property(get = get_DisableSafetyChecks, put = set_DisableSafetyChecks)) bool DisableSafetyChecks;

  __declspec(property(get = get_FloatMode, put = set_FloatMode)) ::Unity::Burst::FloatMode FloatMode;

  __declspec(property(get = get_FloatPrecision, put = set_FloatPrecision)) ::Unity::Burst::FloatPrecision FloatPrecision;

  __declspec(property(get = get_OptimizeFor, put = set_OptimizeFor)) ::Unity::Burst::OptimizeFor OptimizeFor;

  __declspec(property(get = get_Options, put = set_Options)) ::ArrayW<::StringW, ::Array<::StringW>*> Options;

  /// @brief Field <FloatMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__FloatMode_k__BackingField, put = __cordl_internal_set__FloatMode_k__BackingField)) ::Unity::Burst::FloatMode _FloatMode_k__BackingField;

  /// @brief Field <FloatPrecision>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__FloatPrecision_k__BackingField,
                      put = __cordl_internal_set__FloatPrecision_k__BackingField)) ::Unity::Burst::FloatPrecision _FloatPrecision_k__BackingField;

  /// @brief Field <OptimizeFor>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__OptimizeFor_k__BackingField, put = __cordl_internal_set__OptimizeFor_k__BackingField)) ::Unity::Burst::OptimizeFor _OptimizeFor_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField, put = __cordl_internal_set__Options_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*> _Options_k__BackingField;

  /// @brief Field _compileSynchronously, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__compileSynchronously, put = __cordl_internal_set__compileSynchronously)) ::System::Nullable_1<bool> _compileSynchronously;

  /// @brief Field _debug, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get__debug, put = __cordl_internal_set__debug)) ::System::Nullable_1<bool> _debug;

  /// @brief Field _disableDirectCall, offset 0x1e, size 0x2
  __declspec(property(get = __cordl_internal_get__disableDirectCall, put = __cordl_internal_set__disableDirectCall)) ::System::Nullable_1<bool> _disableDirectCall;

  /// @brief Field _disableSafetyChecks, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get__disableSafetyChecks, put = __cordl_internal_set__disableSafetyChecks)) ::System::Nullable_1<bool> _disableSafetyChecks;

  static inline ::Unity::Burst::BurstCompileAttribute* New_ctor();

  static inline ::Unity::Burst::BurstCompileAttribute* New_ctor(::Unity::Burst::FloatPrecision floatPrecision, ::Unity::Burst::FloatMode floatMode);

  static inline ::Unity::Burst::BurstCompileAttribute* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> options);

  constexpr ::Unity::Burst::FloatMode const& __cordl_internal_get__FloatMode_k__BackingField() const;

  constexpr ::Unity::Burst::FloatMode& __cordl_internal_get__FloatMode_k__BackingField();

  constexpr ::Unity::Burst::FloatPrecision const& __cordl_internal_get__FloatPrecision_k__BackingField() const;

  constexpr ::Unity::Burst::FloatPrecision& __cordl_internal_get__FloatPrecision_k__BackingField();

  constexpr ::Unity::Burst::OptimizeFor const& __cordl_internal_get__OptimizeFor_k__BackingField() const;

  constexpr ::Unity::Burst::OptimizeFor& __cordl_internal_get__OptimizeFor_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__Options_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__compileSynchronously() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__compileSynchronously();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__debug() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__debug();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__disableDirectCall() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__disableDirectCall();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__disableSafetyChecks() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__disableSafetyChecks();

  constexpr void __cordl_internal_set__FloatMode_k__BackingField(::Unity::Burst::FloatMode value);

  constexpr void __cordl_internal_set__FloatPrecision_k__BackingField(::Unity::Burst::FloatPrecision value);

  constexpr void __cordl_internal_set__OptimizeFor_k__BackingField(::Unity::Burst::OptimizeFor value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__compileSynchronously(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__debug(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__disableDirectCall(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__disableSafetyChecks(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x62b9614, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x62b9618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::FloatPrecision floatPrecision, ::Unity::Burst::FloatMode floatMode);

  /// @brief Method .ctor, addr 0x62b9620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> options);

  /// @brief Method get_CompileSynchronously, addr 0x62b92c4, size 0x70, virtual false, abstract: false, final false
  inline bool get_CompileSynchronously();

  /// @brief Method get_Debug, addr 0x62b9390, size 0x70, virtual false, abstract: false, final false
  inline bool get_Debug();

  /// @brief Method get_DisableDirectCall, addr 0x62b9528, size 0x70, virtual false, abstract: false, final false
  inline bool get_DisableDirectCall();

  /// @brief Method get_DisableSafetyChecks, addr 0x62b945c, size 0x70, virtual false, abstract: false, final false
  inline bool get_DisableSafetyChecks();

  /// @brief Method get_FloatMode, addr 0x62b92a4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Burst::FloatMode get_FloatMode();

  /// @brief Method get_FloatPrecision, addr 0x62b92b4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Burst::FloatPrecision get_FloatPrecision();

  /// @brief Method get_OptimizeFor, addr 0x62b95f4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Burst::OptimizeFor get_OptimizeFor();

  /// @brief Method get_Options, addr 0x62b9604, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Options();

  /// @brief Method set_CompileSynchronously, addr 0x62b9334, size 0x5c, virtual false, abstract: false, final false
  inline void set_CompileSynchronously(bool value);

  /// @brief Method set_Debug, addr 0x62b9400, size 0x5c, virtual false, abstract: false, final false
  inline void set_Debug(bool value);

  /// @brief Method set_DisableDirectCall, addr 0x62b9598, size 0x5c, virtual false, abstract: false, final false
  inline void set_DisableDirectCall(bool value);

  /// @brief Method set_DisableSafetyChecks, addr 0x62b94cc, size 0x5c, virtual false, abstract: false, final false
  inline void set_DisableSafetyChecks(bool value);

  /// @brief Method set_FloatMode, addr 0x62b92ac, size 0x8, virtual false, abstract: false, final false
  inline void set_FloatMode(::Unity::Burst::FloatMode value);

  /// @brief Method set_FloatPrecision, addr 0x62b92bc, size 0x8, virtual false, abstract: false, final false
  inline void set_FloatPrecision(::Unity::Burst::FloatPrecision value);

  /// @brief Method set_OptimizeFor, addr 0x62b95fc, size 0x8, virtual false, abstract: false, final false
  inline void set_OptimizeFor(::Unity::Burst::OptimizeFor value);

  /// @brief Method set_Options, addr 0x62b960c, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompileAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompileAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompileAttribute(BurstCompileAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompileAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompileAttribute(BurstCompileAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17266 };

  /// @brief Field <FloatMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Unity::Burst::FloatMode ____FloatMode_k__BackingField;

  /// @brief Field <FloatPrecision>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Unity::Burst::FloatPrecision ____FloatPrecision_k__BackingField;

  /// @brief Field _compileSynchronously, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____compileSynchronously;

  /// @brief Field _debug, offset: 0x1a, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____debug;

  /// @brief Field _disableSafetyChecks, offset: 0x1c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____disableSafetyChecks;

  /// @brief Field _disableDirectCall, offset: 0x1e, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____disableDirectCall;

  /// @brief Field <OptimizeFor>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::Unity::Burst::OptimizeFor ____OptimizeFor_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____FloatMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____FloatPrecision_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____compileSynchronously) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____debug) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____disableSafetyChecks) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____disableDirectCall) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____OptimizeFor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompileAttribute, ____Options_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompileAttribute, 0x30>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::BurstCompileAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompileAttribute*, "Unity.Burst", "BurstCompileAttribute");
