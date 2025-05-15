#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__BitVector32_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectPropertyDescriptor)
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Diagnostics {
class TraceSwitch;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Attribute;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectPropertyDescriptor);
// Dependencies System.Collections.Specialized.BitVector32, System.ComponentModel.PropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReflectPropertyDescriptor
class CORDL_TYPE ReflectPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_AmbientValue)) ::System::Object* AmbientValue;

  /// @brief Field BitAmbientValueQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitAmbientValueQueried, put = setStaticF_BitAmbientValueQueried)) int32_t BitAmbientValueQueried;

  /// @brief Field BitChangedQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitChangedQueried, put = setStaticF_BitChangedQueried)) int32_t BitChangedQueried;

  /// @brief Field BitDefaultValueQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitDefaultValueQueried, put = setStaticF_BitDefaultValueQueried)) int32_t BitDefaultValueQueried;

  /// @brief Field BitGetQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitGetQueried, put = setStaticF_BitGetQueried)) int32_t BitGetQueried;

  /// @brief Field BitIPropChangedQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitIPropChangedQueried, put = setStaticF_BitIPropChangedQueried)) int32_t BitIPropChangedQueried;

  /// @brief Field BitReadOnlyChecked, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitReadOnlyChecked, put = setStaticF_BitReadOnlyChecked)) int32_t BitReadOnlyChecked;

  /// @brief Field BitResetQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitResetQueried, put = setStaticF_BitResetQueried)) int32_t BitResetQueried;

  /// @brief Field BitSetOnDemand, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitSetOnDemand, put = setStaticF_BitSetOnDemand)) int32_t BitSetOnDemand;

  /// @brief Field BitSetQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitSetQueried, put = setStaticF_BitSetQueried)) int32_t BitSetQueried;

  /// @brief Field BitShouldSerializeQueried, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BitShouldSerializeQueried, put = setStaticF_BitShouldSerializeQueried)) int32_t BitShouldSerializeQueried;

  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_DefaultValue)) ::System::Object* DefaultValue;

  __declspec(property(get = get_GetMethodValue)) ::System::Reflection::MethodInfo* GetMethodValue;

  __declspec(property(get = get_IsExtender)) bool IsExtender;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field PropDescCreateSwitch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PropDescCreateSwitch, put = setStaticF_PropDescCreateSwitch)) ::System::Diagnostics::TraceSwitch* PropDescCreateSwitch;

  /// @brief Field PropDescUsageSwitch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PropDescUsageSwitch, put = setStaticF_PropDescUsageSwitch)) ::System::Diagnostics::TraceSwitch* PropDescUsageSwitch;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  __declspec(property(get = get_ResetMethodValue)) ::System::Reflection::MethodInfo* ResetMethodValue;

  __declspec(property(get = get_SetMethodValue)) ::System::Reflection::MethodInfo* SetMethodValue;

  __declspec(property(get = get_ShouldSerializeMethodValue)) ::System::Reflection::MethodInfo* ShouldSerializeMethodValue;

  /// @brief Field ambientValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientValue, put = __cordl_internal_set_ambientValue)) ::System::Object* ambientValue;

  /// @brief Field argsNone, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_argsNone, put = setStaticF_argsNone)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argsNone;

  /// @brief Field componentClass, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_componentClass, put = __cordl_internal_set_componentClass)) ::System::Type* componentClass;

  /// @brief Field defaultValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) ::System::Object* defaultValue;

  /// @brief Field getMethod, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_getMethod, put = __cordl_internal_set_getMethod)) ::System::Reflection::MethodInfo* getMethod;

  /// @brief Field noValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noValue, put = setStaticF_noValue)) ::System::Object* noValue;

  /// @brief Field propInfo, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_propInfo, put = __cordl_internal_set_propInfo)) ::System::Reflection::PropertyInfo* propInfo;

  /// @brief Field realChangedEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_realChangedEvent, put = __cordl_internal_set_realChangedEvent)) ::System::ComponentModel::EventDescriptor* realChangedEvent;

  /// @brief Field receiverType, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_receiverType, put = __cordl_internal_set_receiverType)) ::System::Type* receiverType;

  /// @brief Field resetMethod, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_resetMethod, put = __cordl_internal_set_resetMethod)) ::System::Reflection::MethodInfo* resetMethod;

  /// @brief Field setMethod, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_setMethod, put = __cordl_internal_set_setMethod)) ::System::Reflection::MethodInfo* setMethod;

  /// @brief Field shouldSerializeMethod, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_shouldSerializeMethod, put = __cordl_internal_set_shouldSerializeMethod)) ::System::Reflection::MethodInfo* shouldSerializeMethod;

  /// @brief Field state, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Collections::Specialized::BitVector32 state;

  /// @brief Field type, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Method CanResetValue, addr 0x4464c20, size 0x274, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method ExtenderCanResetValue, addr 0x4463aa4, size 0x284, virtual false, abstract: false, final false
  inline bool ExtenderCanResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component);

  /// @brief Method ExtenderGetReceiverType, addr 0x4463e58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* ExtenderGetReceiverType();

  /// @brief Method ExtenderGetType, addr 0x4463e60, size 0x10, virtual false, abstract: false, final false
  inline ::System::Type* ExtenderGetType(::System::ComponentModel::IExtenderProvider* provider);

  /// @brief Method ExtenderGetValue, addr 0x4463d28, size 0x130, virtual false, abstract: false, final false
  inline ::System::Object* ExtenderGetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component);

  /// @brief Method ExtenderResetValue, addr 0x4463e70, size 0x510, virtual false, abstract: false, final false
  inline void ExtenderResetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component, ::System::ComponentModel::PropertyDescriptor* notifyDesc);

  /// @brief Method ExtenderSetValue, addr 0x4464380, size 0x46c, virtual false, abstract: false, final false
  inline void ExtenderSetValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component, ::System::Object* value, ::System::ComponentModel::PropertyDescriptor* notifyDesc);

  /// @brief Method ExtenderShouldSerializeValue, addr 0x44647ec, size 0x434, virtual false, abstract: false, final false
  inline bool ExtenderShouldSerializeValue(::System::ComponentModel::IExtenderProvider* provider, ::System::Object* component);

  /// @brief Method FillAttributes, addr 0x4464e94, size 0xac4, virtual true, abstract: false, final false
  inline void FillAttributes(::System::Collections::IList* attributes);

  /// @brief Method GetValue, addr 0x4465ef4, size 0x3c0, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type,
                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo,
                                                                              ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod,
                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  static inline ::System::ComponentModel::ReflectPropertyDescriptor* New_ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Type* receiverType,
                                                                              ::System::Reflection::MethodInfo* getMethod, ::System::Reflection::MethodInfo* setMethod,
                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method OnValueChanged, addr 0x44662b4, size 0xa8, virtual true, abstract: false, final false
  inline void OnValueChanged(::System::Object* component, ::System::EventArgs* e);

  /// @brief Method ResetValue, addr 0x446635c, size 0x464, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x44667c0, size 0x5dc, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x4466d9c, size 0x330, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Object* const& __cordl_internal_get_ambientValue() const;

  constexpr ::System::Object*& __cordl_internal_get_ambientValue();

  constexpr ::System::Type* const& __cordl_internal_get_componentClass() const;

  constexpr ::System::Type*& __cordl_internal_get_componentClass();

  constexpr ::System::Object* const& __cordl_internal_get_defaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get_defaultValue();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_getMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_getMethod();

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get_propInfo() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_propInfo();

  constexpr ::System::ComponentModel::EventDescriptor* const& __cordl_internal_get_realChangedEvent() const;

  constexpr ::System::ComponentModel::EventDescriptor*& __cordl_internal_get_realChangedEvent();

  constexpr ::System::Type* const& __cordl_internal_get_receiverType() const;

  constexpr ::System::Type*& __cordl_internal_get_receiverType();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_resetMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_resetMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_setMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_setMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_shouldSerializeMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_shouldSerializeMethod();

  constexpr ::System::Collections::Specialized::BitVector32 const& __cordl_internal_get_state() const;

  constexpr ::System::Collections::Specialized::BitVector32& __cordl_internal_get_state();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_ambientValue(::System::Object* value);

  constexpr void __cordl_internal_set_componentClass(::System::Type* value);

  constexpr void __cordl_internal_set_defaultValue(::System::Object* value);

  constexpr void __cordl_internal_set_getMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_propInfo(::System::Reflection::PropertyInfo* value);

  constexpr void __cordl_internal_set_realChangedEvent(::System::ComponentModel::EventDescriptor* value);

  constexpr void __cordl_internal_set_receiverType(::System::Type* value);

  constexpr void __cordl_internal_set_resetMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_setMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_shouldSerializeMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_state(::System::Collections::Specialized::BitVector32 value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x4462310, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method .ctor, addr 0x44625e8, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Reflection::PropertyInfo* propInfo, ::System::Reflection::MethodInfo* getMethod,
                    ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method .ctor, addr 0x4462708, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentClass, ::StringW name, ::System::Type* type, ::System::Type* receiverType, ::System::Reflection::MethodInfo* getMethod,
                    ::System::Reflection::MethodInfo* setMethod, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  static inline int32_t getStaticF_BitAmbientValueQueried();

  static inline int32_t getStaticF_BitChangedQueried();

  static inline int32_t getStaticF_BitDefaultValueQueried();

  static inline int32_t getStaticF_BitGetQueried();

  static inline int32_t getStaticF_BitIPropChangedQueried();

  static inline int32_t getStaticF_BitReadOnlyChecked();

  static inline int32_t getStaticF_BitResetQueried();

  static inline int32_t getStaticF_BitSetOnDemand();

  static inline int32_t getStaticF_BitSetQueried();

  static inline int32_t getStaticF_BitShouldSerializeQueried();

  static inline ::System::Diagnostics::TraceSwitch* getStaticF_PropDescCreateSwitch();

  static inline ::System::Diagnostics::TraceSwitch* getStaticF_PropDescUsageSwitch();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_argsNone();

  static inline ::System::Object* getStaticF_noValue();

  /// @brief Method get_AmbientValue, addr 0x44627d0, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Object* get_AmbientValue();

  /// @brief Method get_ComponentType, addr 0x446294c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_DefaultValue, addr 0x4462954, size 0x290, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_GetMethodValue, addr 0x4462be4, size 0x434, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_GetMethodValue();

  /// @brief Method get_IsExtender, addr 0x4463018, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsExtender();

  /// @brief Method get_IsReadOnly, addr 0x4463078, size 0x100, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x446369c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_ResetMethodValue, addr 0x44636a4, size 0x200, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_ResetMethodValue();

  /// @brief Method get_SetMethodValue, addr 0x4463178, size 0x524, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_SetMethodValue();

  /// @brief Method get_ShouldSerializeMethodValue, addr 0x44638a4, size 0x200, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_ShouldSerializeMethodValue();

  static inline void setStaticF_BitAmbientValueQueried(int32_t value);

  static inline void setStaticF_BitChangedQueried(int32_t value);

  static inline void setStaticF_BitDefaultValueQueried(int32_t value);

  static inline void setStaticF_BitGetQueried(int32_t value);

  static inline void setStaticF_BitIPropChangedQueried(int32_t value);

  static inline void setStaticF_BitReadOnlyChecked(int32_t value);

  static inline void setStaticF_BitResetQueried(int32_t value);

  static inline void setStaticF_BitSetOnDemand(int32_t value);

  static inline void setStaticF_BitSetQueried(int32_t value);

  static inline void setStaticF_BitShouldSerializeQueried(int32_t value);

  static inline void setStaticF_PropDescCreateSwitch(::System::Diagnostics::TraceSwitch* value);

  static inline void setStaticF_PropDescUsageSwitch(::System::Diagnostics::TraceSwitch* value);

  static inline void setStaticF_argsNone(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_noValue(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectPropertyDescriptor(ReflectPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectPropertyDescriptor(ReflectPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9446 };

  /// @brief Field state, offset: 0x84, size: 0x4, def value: None
  ::System::Collections::Specialized::BitVector32 ___state;

  /// @brief Field componentClass, offset: 0x88, size: 0x8, def value: None
  ::System::Type* ___componentClass;

  /// @brief Field type, offset: 0x90, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field defaultValue, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ___defaultValue;

  /// @brief Field ambientValue, offset: 0xa0, size: 0x8, def value: None
  ::System::Object* ___ambientValue;

  /// @brief Field propInfo, offset: 0xa8, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___propInfo;

  /// @brief Field getMethod, offset: 0xb0, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___getMethod;

  /// @brief Field setMethod, offset: 0xb8, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___setMethod;

  /// @brief Field shouldSerializeMethod, offset: 0xc0, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___shouldSerializeMethod;

  /// @brief Field resetMethod, offset: 0xc8, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___resetMethod;

  /// @brief Field realChangedEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::ComponentModel::EventDescriptor* ___realChangedEvent;

  /// @brief Field receiverType, offset: 0xd8, size: 0x8, def value: None
  ::System::Type* ___receiverType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___state) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___componentClass) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___type) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___defaultValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___ambientValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___propInfo) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___getMethod) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___setMethod) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___shouldSerializeMethod) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___resetMethod) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___realChangedEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectPropertyDescriptor, ___receiverType) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectPropertyDescriptor, 0xe0>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectPropertyDescriptor*, "System.ComponentModel", "ReflectPropertyDescriptor");
