START_DEFINE_RULES()

DEFINE_RULE(rule_scale, scale_of<Input>() == scale_of<Output>())

#ifndef __ENABLE_HW_SPEC__

ADD_RULE(rule_scale)

#endif
