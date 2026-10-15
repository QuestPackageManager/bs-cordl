#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupCountProviderComposite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupCountProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupCountProviderComposite)
namespace GlobalNamespace {
struct LightGroupAxis;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite_SetCounts;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupCountProviderComposite;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite_SetCounts;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class LightGroupCountProviderComposite___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderComposite*);
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*);
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderComposite___c*);
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0*);
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderComposite*, "", "LightGroupCountProviderComposite");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, "", "LightGroupCountProviderComposite/SetCounts");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderComposite___c*, "", "LightGroupCountProviderComposite/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0*, "", "LightGroupCountProviderComposite/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0*, "", "LightGroupCountProviderComposite/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderComposite/SetCounts
class CORDL_TYPE LightGroupCountProviderComposite_SetCounts : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colorCount, put = __cordl_internal_set__colorCount)) int32_t _colorCount;

  /// @brief Field _floatFxCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__floatFxCount, put = __cordl_internal_set__floatFxCount)) int32_t _floatFxCount;

  /// @brief Field _rotationXCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationXCount, put = __cordl_internal_set__rotationXCount)) int32_t _rotationXCount;

  /// @brief Field _rotationYCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationYCount, put = __cordl_internal_set__rotationYCount)) int32_t _rotationYCount;

  /// @brief Field _rotationZCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationZCount, put = __cordl_internal_set__rotationZCount)) int32_t _rotationZCount;

  /// @brief Field _translationXCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__translationXCount, put = __cordl_internal_set__translationXCount)) int32_t _translationXCount;

  /// @brief Field _translationYCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__translationYCount, put = __cordl_internal_set__translationYCount)) int32_t _translationYCount;

  /// @brief Field _translationZCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__translationZCount, put = __cordl_internal_set__translationZCount)) int32_t _translationZCount;

  __declspec(property(get = get_colorCount)) int32_t colorCount;

  __declspec(property(get = get_floatFxCount)) int32_t floatFxCount;

  __declspec(property(get = get_rotationXCount)) int32_t rotationXCount;

  __declspec(property(get = get_rotationYCount)) int32_t rotationYCount;

  __declspec(property(get = get_rotationZCount)) int32_t rotationZCount;

  __declspec(property(get = get_translationXCount)) int32_t translationXCount;

  __declspec(property(get = get_translationYCount)) int32_t translationYCount;

  __declspec(property(get = get_translationZCount)) int32_t translationZCount;

  /// @brief Method GetMaxCount, addr 0x5cba280, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetMaxCount();

  /// @brief Method GetRotationCount, addr 0x5cba218, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetRotationCount(::GlobalNamespace::LightGroupAxis axis);

  /// @brief Method GetTranslationCount, addr 0x5cba24c, size 0x34, virtual false, abstract: false, final false
  inline int32_t GetTranslationCount(::GlobalNamespace::LightGroupAxis axis);

  static inline ::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* New_ctor();

  constexpr int32_t const& __cordl_internal_get__colorCount() const;

  constexpr int32_t& __cordl_internal_get__colorCount();

  constexpr int32_t const& __cordl_internal_get__floatFxCount() const;

  constexpr int32_t& __cordl_internal_get__floatFxCount();

  constexpr int32_t const& __cordl_internal_get__rotationXCount() const;

  constexpr int32_t& __cordl_internal_get__rotationXCount();

  constexpr int32_t const& __cordl_internal_get__rotationYCount() const;

  constexpr int32_t& __cordl_internal_get__rotationYCount();

  constexpr int32_t const& __cordl_internal_get__rotationZCount() const;

  constexpr int32_t& __cordl_internal_get__rotationZCount();

  constexpr int32_t const& __cordl_internal_get__translationXCount() const;

  constexpr int32_t& __cordl_internal_get__translationXCount();

  constexpr int32_t const& __cordl_internal_get__translationYCount() const;

  constexpr int32_t& __cordl_internal_get__translationYCount();

  constexpr int32_t const& __cordl_internal_get__translationZCount() const;

  constexpr int32_t& __cordl_internal_get__translationZCount();

  constexpr void __cordl_internal_set__colorCount(int32_t value);

  constexpr void __cordl_internal_set__floatFxCount(int32_t value);

  constexpr void __cordl_internal_set__rotationXCount(int32_t value);

  constexpr void __cordl_internal_set__rotationYCount(int32_t value);

  constexpr void __cordl_internal_set__rotationZCount(int32_t value);

  constexpr void __cordl_internal_set__translationXCount(int32_t value);

  constexpr void __cordl_internal_set__translationYCount(int32_t value);

  constexpr void __cordl_internal_set__translationZCount(int32_t value);

  /// @brief Method .ctor, addr 0x5cba294, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorCount, addr 0x5cba1d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorCount();

  /// @brief Method get_floatFxCount, addr 0x5cba1e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_floatFxCount();

  /// @brief Method get_rotationXCount, addr 0x5cba1e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rotationXCount();

  /// @brief Method get_rotationYCount, addr 0x5cba1f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rotationYCount();

  /// @brief Method get_rotationZCount, addr 0x5cba1f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rotationZCount();

  /// @brief Method get_translationXCount, addr 0x5cba200, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_translationXCount();

  /// @brief Method get_translationYCount, addr 0x5cba208, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_translationYCount();

  /// @brief Method get_translationZCount, addr 0x5cba210, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_translationZCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderComposite_SetCounts();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite_SetCounts", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderComposite_SetCounts(LightGroupCountProviderComposite_SetCounts&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite_SetCounts", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderComposite_SetCounts(LightGroupCountProviderComposite_SetCounts const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19976 };

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _colorCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____colorCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _floatFxCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____floatFxCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _rotationXCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____rotationXCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _rotationYCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ____rotationYCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _rotationZCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____rotationZCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _translationXCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____translationXCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _translationYCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____translationYCount;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _translationZCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ____translationZCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____colorCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____floatFxCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____rotationXCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____rotationYCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____rotationZCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____translationXCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____translationYCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts, ____translationZCount) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderComposite/<>c
class CORDL_TYPE LightGroupCountProviderComposite___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LightGroupCountProviderComposite___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* __9__7_0;

  static inline ::GlobalNamespace::LightGroupCountProviderComposite___c* New_ctor();

  /// @brief Method <GetColorCount>b__6_0, addr 0x5cba310, size 0x14, virtual false, abstract: false, final false
  inline int32_t _GetColorCount_b__6_0(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* s);

  /// @brief Method <GetFloatFxCount>b__7_0, addr 0x5cba324, size 0x14, virtual false, abstract: false, final false
  inline int32_t _GetFloatFxCount_b__7_0(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* s);

  /// @brief Method .ctor, addr 0x5cba2ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_numberOfElements>b__5_0, addr 0x5cba2f0, size 0x20, virtual false, abstract: false, final false
  inline int32_t _get_numberOfElements_b__5_0(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* setCount);

  static inline ::GlobalNamespace::LightGroupCountProviderComposite___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* getStaticF___9__5_0();

  static inline ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* getStaticF___9__6_0();

  static inline ::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* getStaticF___9__7_0();

  static inline void setStaticF___9(::GlobalNamespace::LightGroupCountProviderComposite___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderComposite___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderComposite___c(LightGroupCountProviderComposite___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderComposite___c(LightGroupCountProviderComposite___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19977 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderComposite___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies LightGroupAxis, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderComposite/<>c__DisplayClass8_0
class CORDL_TYPE LightGroupCountProviderComposite___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field axis, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis)) ::GlobalNamespace::LightGroupAxis axis;

  static inline ::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0* New_ctor();

  /// @brief Method <GetRotationCount>b__0, addr 0x5cba338, size 0x44, virtual false, abstract: false, final false
  inline int32_t _GetRotationCount_b__0(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* s);

  constexpr ::GlobalNamespace::LightGroupAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightGroupAxis& __cordl_internal_get_axis();

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightGroupAxis value);

  /// @brief Method .ctor, addr 0x5cba074, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderComposite___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderComposite___c__DisplayClass8_0(LightGroupCountProviderComposite___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderComposite___c__DisplayClass8_0(LightGroupCountProviderComposite___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19978 };

  /// @brief Field axis, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::LightGroupAxis ___axis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0, ___axis) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies LightGroupAxis, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderComposite/<>c__DisplayClass9_0
class CORDL_TYPE LightGroupCountProviderComposite___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field axis, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis)) ::GlobalNamespace::LightGroupAxis axis;

  static inline ::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0* New_ctor();

  /// @brief Method <GetTranslationCount>b__0, addr 0x5cba37c, size 0x44, virtual false, abstract: false, final false
  inline int32_t _GetTranslationCount_b__0(::GlobalNamespace::LightGroupCountProviderComposite_SetCounts* s);

  constexpr ::GlobalNamespace::LightGroupAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightGroupAxis& __cordl_internal_get_axis();

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightGroupAxis value);

  /// @brief Method .ctor, addr 0x5cba134, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderComposite___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderComposite___c__DisplayClass9_0(LightGroupCountProviderComposite___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderComposite___c__DisplayClass9_0(LightGroupCountProviderComposite___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19979 };

  /// @brief Field axis, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::LightGroupAxis ___axis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0, ___axis) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightGroupCountProvider, LightGroupCountProviderComposite::SetCounts
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderComposite
class CORDL_TYPE LightGroupCountProviderComposite : public ::GlobalNamespace::LightGroupCountProvider {
public:
  // Declarations
  using SetCounts = ::GlobalNamespace::LightGroupCountProviderComposite_SetCounts;

  using __c = ::GlobalNamespace::LightGroupCountProviderComposite___c;

  using __c__DisplayClass8_0 = ::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::LightGroupCountProviderComposite___c__DisplayClass9_0;

  /// @brief Field _sets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sets, put = __cordl_internal_set__sets)) ::ArrayW<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*> _sets;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  __declspec(property(get = get_sets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*>* sets;

  /// @brief Method GetColorCount, addr 0x5cb9de0, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetColorCount();

  /// @brief Method GetFloatFxCount, addr 0x5cb9ecc, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetFloatFxCount();

  /// @brief Method GetRotationCount, addr 0x5cb9fb8, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetRotationCount(::GlobalNamespace::LightGroupAxis axis);

  /// @brief Method GetTranslationCount, addr 0x5cba078, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetTranslationCount(::GlobalNamespace::LightGroupAxis axis);

  /// @brief Method Max, addr 0x5cb9d54, size 0x8c, virtual false, abstract: false, final false
  inline int32_t Max(::System::Func_2<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*, int32_t>* selector);

  static inline ::GlobalNamespace::LightGroupCountProviderComposite* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*> const& __cordl_internal_get__sets() const;

  constexpr ::ArrayW<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*>& __cordl_internal_get__sets();

  constexpr void __cordl_internal_set__sets(::ArrayW<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*> value);

  /// @brief Method .ctor, addr 0x5cba138, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_numberOfElements, addr 0x5cb9c68, size 0xec, virtual true, abstract: false, final false
  inline int32_t get_numberOfElements();

  /// @brief Method get_sets, addr 0x5cb9c60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*>* get_sets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderComposite(LightGroupCountProviderComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderComposite", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderComposite(LightGroupCountProviderComposite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19980 };

  /// [SerializeField]
  /// @brief Field _sets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroupCountProviderComposite_SetCounts*> ____sets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderComposite, ____sets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderComposite) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
