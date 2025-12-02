#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/Watch_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Watch_1)
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1_ToDisplayStringSignature;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1___c__DisplayClass20_0;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1_ToDisplayStringSignature;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Watch_1___c__DisplayClass20_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Watch_1);
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature);
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0);
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Watch`1/ToDisplayStringSignature<T>
class CORDL_TYPE Watch_1_ToDisplayStringSignature : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(T value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T value, ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> valuesContainer);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Watch_1_ToDisplayStringSignature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Watch_1_ToDisplayStringSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Watch_1_ToDisplayStringSignature(Watch_1_ToDisplayStringSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Watch_1_ToDisplayStringSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Watch_1_ToDisplayStringSignature(Watch_1_ToDisplayStringSignature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Watch`1/<>c__DisplayClass20_0<T>
class CORDL_TYPE Watch_1___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* __4__this;

  /// @brief Field memberInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*& __cordl_internal_get___4__this();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __ctor_b__0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Watch_1___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Watch_1___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Watch_1___c__DisplayClass20_0(Watch_1___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Watch_1___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Watch_1___c__DisplayClass20_0(Watch_1___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18400 };

  /// @brief Field memberInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Watch
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Watch`1<T>
class CORDL_TYPE Watch_1 : public ::Meta::XR::ImmersiveDebugger::Manager::Watch {
public:
  // Declarations
  using ToDisplayStringSignature = ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>;

  using __c__DisplayClass20_0 = ::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>;

  __declspec(property(get = get_NumberOfValues)) int32_t NumberOfValues;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Field <NumberOfDisplayStrings>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__NumberOfDisplayStrings_k__BackingField, put = setStaticF__NumberOfDisplayStrings_k__BackingField)) int32_t _NumberOfDisplayStrings_k__BackingField;

  /// @brief Field <ToDisplayStringsDelegate>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ToDisplayStringsDelegate_k__BackingField,
                      put =
                          setStaticF__ToDisplayStringsDelegate_k__BackingField)) ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* _ToDisplayStringsDelegate_k__BackingField;

  /// @brief Field _buffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__buffer, put = setStaticF__buffer)) ::ArrayW<::StringW, ::Array<::StringW>*> _buffer;

  /// @brief Field _getter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getter, put = __cordl_internal_set__getter)) ::System::Func_1<T>* _getter;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                             ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method ResetBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ResetBuffer();

  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Setup(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* del, int32_t numberOfValues);

  /// @brief Method ToDisplayStrings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ToDisplayStrings(T value);

  constexpr ::System::Func_1<T>* const& __cordl_internal_get__getter() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get__getter();

  constexpr void __cordl_internal_set__getter(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  static inline int32_t getStaticF__NumberOfDisplayStrings_k__BackingField();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* getStaticF__ToDisplayStringsDelegate_k__BackingField();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__buffer();

  /// @brief Method get_NumberOfDisplayStrings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_NumberOfDisplayStrings();

  /// @brief Method get_NumberOfValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_NumberOfValues();

  /// @brief Method get_ToDisplayStringsDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* get_ToDisplayStringsDelegate();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

  static inline void setStaticF__NumberOfDisplayStrings_k__BackingField(int32_t value);

  static inline void setStaticF__ToDisplayStringsDelegate_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* value);

  static inline void setStaticF__buffer(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_NumberOfDisplayStrings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void set_NumberOfDisplayStrings(int32_t value);

  /// @brief Method set_ToDisplayStringsDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void set_ToDisplayStringsDelegate(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Watch_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Watch_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Watch_1(Watch_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Watch_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Watch_1(Watch_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18401 };

  /// @brief Field _getter, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<T>* ____getter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::Watch_1, "Meta.XR.ImmersiveDebugger.Manager", "Watch`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature, "Meta.XR.ImmersiveDebugger.Manager", "Watch`1/ToDisplayStringSignature");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0, "Meta.XR.ImmersiveDebugger.Manager", "Watch`1/<>c__DisplayClass20_0");
